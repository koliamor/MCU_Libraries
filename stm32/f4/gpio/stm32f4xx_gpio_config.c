/********************************************************************************
  * @file    stm32f4xx_gpio_config.c
  * @author  KoliaMor@tut.by
  * @version v1.0.1
  * @date    28/06/2018
  * @brief   Template GPIO configurator for stm32f4xx
  ******************************************************************************
*/

/* Includes ------------------------------------------------------------------*/
#include "stm32f4xx.h"         	// Device header
#include "stm32f4xx_gpio_def.h"	// Macro definition for GPIO setup
/* Private typedef -----------------------------------------------------------*/
/* Private define ------------------------------------------------------------*/
/* Private macro -------------------------------------------------------------*/
/* Port Configurator ---------------------------------------------------------*/
/* Private variables ---------------------------------------------------------*/
/* Private function prototypes -----------------------------------------------*/
/* Private functions ---------------------------------------------------------*/

/** @brief  This function GPIO Initialization
  * @param  None
  * @retval None
  */
void stm32f4xx_gpio_config(void)
{
	RCC->AHB1ENR |= RCC_AHB1ENR_GPIOAEN; // Allow clocking GPIOA
	
	/*Port configuration GPIOA, default value:
		GPIOA_MODER = 0xA800 0000, GPIOA_OTYPER = 0x0000 0000, GPIOA_OSPEEDR = 0x0C00 0000,
	  GPIOA_PUPDR = 0x6400 0000, GPIOA_AFRL 	= 0x0000 0000, GPIOA_AFRH 	 = 0x0000 0000
	  Config in only-SWD programming mode*/
	PINIT( GPIOA ,
	/*Pin 0*/		INPUT		,TYPE_NU		,SPD_NU			,PULL_NU		,AF_NU							,	// 
	/*Pin 1*/		INPUT		,TYPE_NU		,SPD_NU			,PULL_NU		,AF_NU							,	// 
	/*Pin 2*/		INPUT		,TYPE_NU		,SPD_NU			,PULL_NU		,AF_NU							,	// 
	/*Pin 3*/		INPUT		,TYPE_NU		,SPD_NU			,PULL_NU		,AF_NU							,	// 
	/*Pin 4*/		INPUT		,TYPE_NU		,SPD_NU			,PULL_NU		,AF_NU							,	// 
	/*Pin 5*/		INPUT		,TYPE_NU		,SPD_NU			,PULL_NU		,AF_NU							,	// 
	/*Pin 6*/		INPUT		,TYPE_NU		,SPD_NU			,PULL_NU		,AF_NU							,	// 
	/*Pin 7*/		INPUT		,TYPE_NU		,SPD_NU			,PULL_NU		,AF_NU							,	// 
	/*Pin 8*/		INPUT		,TYPE_NU		,SPD_NU			,PULL_NU		,AF_NU							,	// 
	/*Pin 9*/		INPUT		,TYPE_NU		,SPD_NU			,PULL_NU		,AF_NU							,	// 
	/*Pin 10*/	INPUT		,TYPE_NU		,SPD_NU			,PULL_NU		,AF_NU							,	// 
	/*Pin 11*/	INPUT		,TYPE_NU		,SPD_NU			,PULL_NU		,AF_NU							,	// 
	/*Pin 12*/	INPUT		,TYPE_NU		,SPD_NU			,PULL_NU		,AF_NU							,	// 
	/*Pin 13*/	ALTERN	,TYPE_NU		,SPD_HIGH		,PULL_UP		,AF0_PA13_SWDIO			,	// STM_SWDIO
	/*Pin 14*/	ALTERN	,TYPE_NU		,SPD_NU			,PULL_DOWN	,AF0_PA14_SWCLK			,	// STM_SWCLK
	/*Pin 15*/	INPUT		,TYPE_NU		,SPD_NU			,PULL_NU		,AF_NU    					);// 

	RCC->AHB1ENR |= RCC_AHB1ENR_GPIOBEN; // Allow clocking GPIOB
	/*Port configuration GPIOB, default value:
		GPIOB_MODER = 0x0000 0280, GPIOB_OTYPER = 0x0000 0000, GPIOB_OSPEEDR = 0x0000 00C0,
	  GPIOB_PUPDR = 0x0000 0100, GPIOB_AFRL 	= 0x0000 0000, GPIOB_AFRH 	 = 0x0000 0000*/
	PINIT( GPIOB ,
	/*Pin 0*/		INPUT		,TYPE_NU		,SPD_NU			,PULL_NU		,AF_NU							,	// 
	/*Pin 1*/		INPUT		,TYPE_NU		,SPD_NU			,PULL_NU		,AF_NU							,	// 
	/*Pin 2*/		INPUT		,TYPE_NU		,SPD_NU			,PULL_NU		,AF_NU							,	//  
	/*Pin 3*/		INPUT		,TYPE_NU		,SPD_NU			,PULL_NU		,AF_NU							,	// 
	/*Pin 4*/		INPUT		,TYPE_NU		,SPD_NU			,PULL_NU		,AF_NU							,	// 
	/*Pin 5*/		INPUT		,TYPE_NU		,SPD_NU			,PULL_NU		,AF_NU							,	// 
	/*Pin 6*/		INPUT		,TYPE_NU		,SPD_NU			,PULL_NU		,AF_NU							,	// 
	/*Pin 7*/		INPUT		,TYPE_NU		,SPD_NU			,PULL_NU		,AF_NU							,	// 
	/*Pin 8*/		INPUT		,TYPE_NU		,SPD_NU			,PULL_NU		,AF_NU							,	//  
	/*Pin 9*/		INPUT		,TYPE_NU		,SPD_NU			,PULL_NU		,AF_NU							,	//  
	/*Pin 10*/	INPUT		,TYPE_NU		,SPD_NU			,PULL_NU		,AF_NU							,	//  
	/*Pin 11*/	INPUT		,TYPE_NU		,SPD_NU			,PULL_NU		,AF_NU							,	// 
	/*Pin 12*/	INPUT		,TYPE_NU		,SPD_NU			,PULL_NU		,AF_NU							,	// 
	/*Pin 13*/	INPUT		,TYPE_NU		,SPD_NU			,PULL_NU		,AF_NU							,	// 
	/*Pin 14*/	INPUT		,TYPE_NU		,SPD_NU			,PULL_NU		,AF_NU							,	// 
	/*Pin 15*/	INPUT		,TYPE_NU		,SPD_NU			,PULL_NU		,AF_NU    					);// 

	RCC->AHB1ENR |= RCC_AHB1ENR_GPIOCEN; // Allow clocking GPIOC
	/*Port configuration GPIOC, default value:
		GPIOC_MODER = 0x0000 0000, GPIOC_OTYPER = 0x0000 0000, GPIOC_OSPEEDR = 0x0000 0000,
	  GPIOC_PUPDR = 0x0000 0000, GPIOC_AFRL 	= 0x0000 0000, GPIOC_AFRH 	 = 0x0000 0000*/
	PINIT( GPIOC ,
	/*Pin 0*/		INPUT		,TYPE_NU		,SPD_NU			,PULL_NU		,AF_NU						,	//  
	/*Pin 1*/		INPUT		,TYPE_NU		,SPD_NU			,PULL_NU		,AF_NU						,	// 
	/*Pin 2*/		INPUT		,TYPE_NU		,SPD_NU			,PULL_NU		,AF_NU						,	// 
	/*Pin 3*/		INPUT		,TYPE_NU		,SPD_NU			,PULL_NU		,AF_NU						,	//  
	/*Pin 4*/		INPUT		,TYPE_NU		,SPD_NU			,PULL_NU		,AF_NU						,	// 
	/*Pin 5*/		INPUT		,TYPE_NU		,SPD_NU			,PULL_NU		,AF_NU						,	// 
	/*Pin 6*/		INPUT		,TYPE_NU		,SPD_NU			,PULL_NU		,AF_NU						,	//  
	/*Pin 7*/		INPUT		,TYPE_NU		,SPD_NU			,PULL_NU		,AF_NU						,	// 
	/*Pin 8*/		INPUT		,TYPE_NU		,SPD_NU			,PULL_NU		,AF_NU						,	// 
	/*Pin 9*/		INPUT		,TYPE_NU		,SPD_NU			,PULL_NU		,AF_NU						,	// 
	/*Pin 10*/	INPUT		,TYPE_NU		,SPD_NU			,PULL_NU		,AF_NU						,	// 
	/*Pin 11*/	INPUT		,TYPE_NU		,SPD_NU			,PULL_NU		,AF_NU						,	// 
	/*Pin 12*/	INPUT		,TYPE_NU		,SPD_NU			,PULL_NU		,AF_NU						,	// 
	/*Pin 13*/	INPUT		,TYPE_NU		,SPD_NU			,PULL_NU		,AF_NU						,	// 
	/*Pin 14*/	INPUT		,TYPE_NU		,SPD_NU			,PULL_NU		,AF_NU						,	// 
	/*Pin 15*/	INPUT		,TYPE_NU		,SPD_NU			,PULL_NU		,AF_NU    				);// 
	
}
