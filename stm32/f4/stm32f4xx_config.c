/********************************************************************************
  * @file    stm32f4xx_config.c
  * @author  KoliaMor@tut.by
  * @version v1.0.0
  * @date    06/10/2017
  * @brief   Configurator for stm32f4xx
  ******************************************************************************
*/

/* Includes ------------------------------------------------------------------*/
#include "stm32f4xx.h"                  // Device header
#include "gpio\\stm32f4xx_gpio_config.h"
#include "stm32f4xx_config.h"

static void SetSysClock(void);
static void EnableBackUpDomainRam(void);
/**
  * @brief  This function stm32f030 Configigurator
  * @param  None
  * @retval None
  */
void stm32f4xx_config(void)
{
	SetSysClock(); // Set 48 Mhz SysClock
	SystemCoreClockUpdate();
	EnableBackUpDomainRam();
	
	stm32f4xx_gpio_config();
}
/* PLL Parameters ------------------------------------------------------------*/
// STM32F4xx_Clock_Configuration_V1.1.0.xls
// PLL_VCO = (HSE_VALUE or HSI_VALUE / PLL_M) * PLL_N
#define PLL_M      8 		// 2 <= PLLM <= 63
#define PLL_N      192	// 192 <= PLLN <= 432
// SYSCLK = PLL_VCO / PLL_P
#define PLL_P      4		// PLLP = 2, 4, 6, or 8
// USB OTG FS, SDIO and RNG Clock =  PLL_VCO / PLLQ
#define PLL_Q      8		// 2 <= PLLQ <= 15
/**
  * @brief  Configures the System clock source, PLL Multiplier and Divider factors, 
  *         AHB/APBx prescalers and Flash settings
  * @Note   This function should be called only once the RCC clock configuration  
  *         is reset to the default reset state (done in SystemInit() function).   
  * @param  None
  * @retval None
  */
static void SetSysClock(void)
{
  // At this stage the HSI is already enabled and used as System clock source
  // Select regulator voltage output Scale 2 mode, System frequency up to 144 MHz
  RCC->APB1ENR |= RCC_APB1ENR_PWREN;
  PWR->CR &= (uint32_t)~(PWR_CR_VOS);
  // HCLK = SYSCLK / 1
  RCC->CFGR |= RCC_CFGR_HPRE_DIV1; 
  // PCLK2 = HCLK / 2
  RCC->CFGR |= RCC_CFGR_PPRE2_DIV2;
  // PCLK1 = HCLK / 1
  RCC->CFGR |= RCC_CFGR_PPRE1_DIV4;
  // Configure the main PLL 
  RCC->PLLCFGR = PLL_M | (PLL_N << 6) | (((PLL_P >> 1) -1) << 16) |
                 (RCC_PLLCFGR_PLLSRC_HSI) | (PLL_Q << 24);
  // Enable the main PLL
  RCC->CR |= RCC_CR_PLLON;
  // Wait till the main PLL is ready
  while((RCC->CR & RCC_CR_PLLRDY) == 0){}
  // Configure Flash prefetch, Instruction cache, Data cache and wait state
  FLASH->ACR = FLASH_ACR_ICEN |FLASH_ACR_DCEN |FLASH_ACR_LATENCY_3WS;
  // Select the main PLL as system clock source
  RCC->CFGR &= (uint32_t)((uint32_t)~(RCC_CFGR_SW));
  RCC->CFGR |= RCC_CFGR_SW_PLL;
  // Wait till the main PLL is used as system clock source
  while ((RCC->CFGR & (uint32_t)RCC_CFGR_SWS ) != RCC_CFGR_SWS_PLL){}
}
/**
  * @brief  Enable Back Up domain ram
  * @param  None
  * @retval None
  */
static void EnableBackUpDomainRam(void)
{
	RCC->APB1ENR |= RCC_APB1ENR_PWREN; // Enable the power interface clock
	PWR->CR |= PWR_CR_DBP; // Set the DBP bit to enable access to the backup domain
	RCC->AHB1ENR |= RCC_AHB1ENR_BKPSRAMEN; // Enable the backup SRAM clock
	
	// This code used only battery set ???
	PWR->CSR |= PWR_CSR_BRE; //Backup regulator enable 
  while (!(PWR->CSR & PWR_CSR_BRR)); // Wait for backup regulator to be ready
}
