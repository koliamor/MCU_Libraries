/********************************************************************************
  * @file   stm32f4xx_afr_def.h
  * @author  KoliaMor@tut.by
  * @version v1.0.1
  * @date    28/06/2018
  * @brief   stm32f4xx alternate func. macro definition
  ******************************************************************************
*/

#ifndef __STM32F4xx_AFR_DEF_H
#define __STM32F4xx_AFR_DEF_H

#define AF_NU								(unsigned)0x0 //NOT USED
	
// AF0
//			AF0_PA0 - don't available
//			AF0_PA1 - don't available
//			AF0_PA2 - don't available
//			AF0_PA3 - don't available
//			AF0_PA4 - don't available
//			AF0_PA5 - don't available
//			AF0_PA6 - don't available
//			AF0_PA7 - don't available
#define AF0_PA8_MCO1				(unsigned)0x0
//			AF0_PA9 - don't available
//			AF0_PA10 - don't available
//			AF0_PA11 - don't available
//			AF0_PA12 - don't available
#define AF0_PA13_SWDIO			(unsigned)0x0
#define AF0_PA14_SWCLK			(unsigned)0x0
#define AF0_PA15_JTDI				(unsigned)0x0
	
// AF1
#define AF1_PA0_TIM2_CH1_ETR(unsigned)0x1
#define AF1_PA1_TIM2_CH2		(unsigned)0x1
#define AF1_PA2_TIM2_CH3		(unsigned)0x1
#define AF1_PA3_TIM2_CH4		(unsigned)0x1
//			AF1_PA4 - don't available
#define AF1_PA5_TIM2_CH1_ETR(unsigned)0x1
#define AF1_PA6_TIM1_BKIN		(unsigned)0x1
#define AF1_PA7_TIM1_CH1N		(unsigned)0x1
#define AF1_PA8_TIM1_CH1		(unsigned)0x1
#define AF1_PA9_TIM1_CH2		(unsigned)0x1
#define AF1_PA10_TIM1_CH3		(unsigned)0x1
#define AF1_PA11_TIM2_CH4		(unsigned)0x1
#define AF1_PA12_TIM1_BKIN	(unsigned)0x1
#define AF1_PA13_TIM1_CH1N 	(unsigned)0x1
#define AF1_PA14_TIM1_CH2N	(unsigned)0x1
#define AF1_PA15_TIM1_CH3N	(unsigned)0x1
	
// AF5
//			AF5_PB0 - don't available
//			AF5_PB1 - don't available
//			AF5_PB2 - don't available
#define AF5_PB3_SPI1_SCK		(unsigned)0x5
#define AF5_PB4_SPI1_MISO		(unsigned)0x5
#define AF5_PB5_SPI1_MOSI		(unsigned)0x5
//			AF5_PB6 - don't available
//			AF5_PB7 - don't available
//			AF5_PB8 - don't available
#define AF5_PB9_SPI2_NSS		(unsigned)0x5
#define AF5_PB9_I2S2_WS			(unsigned)0x5
#define AF5_PB10_SPI2_SCK		(unsigned)0x5
#define AF5_PB10_I2S2_CK		(unsigned)0x5
//			AF5_PB11 - don't available
#define AF5_PB12_SPI2_NSS 	(unsigned)0x5
#define AF5_PB12_I2S2_WS	 	(unsigned)0x5
#define AF5_PB13_SPI2_SCK 	(unsigned)0x5
#define AF5_PB13_I2S2_CK 		(unsigned)0x5
#define AF5_PB14_SPI2_MISO	(unsigned)0x5
#define AF5_PB15_SPI2_MOSI	(unsigned)0x5
#define AF5_PB15_I2S2_SD		(unsigned)0x5

// AF6
//			AF6_PB0 - don't available
//			AF6_PB1 - don't available
//			AF6_PB2 - don't available
#define AF6_PB3_SPI3_SCK		(unsigned)0x6
#define AF6_PB4_SPI3_MISO		(unsigned)0x6
#define AF6_PB5_SPI3_MOSI		(unsigned)0x6
//			AF6_PB6 - don't available
//			AF6_PB7 - don't available
//			AF6_PB8 - don't available
//			AF6_PB9 - don't available
//			AF6_PB10 - don't available
//			AF6_PB11 - don't available
//			AF6_PB12 - don't available
//			AF6_PB13 - don't available
#define AF6_PB14_I2S2ext_SD	(unsigned)0x6
//			AF6_PB15 - don't available
	
// AF7
#define AF7_PA0_USART2_CTS	(unsigned)0x7
#define AF7_PA1_USART2_RTS	(unsigned)0x7
#define AF7_PA2_USART2_TX		(unsigned)0x7
#define AF7_PA3_USART2_RX		(unsigned)0x7
#define AF7_PA4_USART2_CK		(unsigned)0x7
//			AF5_PA5 - don't available
//			AF5_PA6 - don't available
//			AF5_PA7 - don't available
#define AF7_PA8_USART1_CK		(unsigned)0x7
#define AF7_PA9_USART1_TX		(unsigned)0x7
#define AF7_PA10_USART1_RX	(unsigned)0x7
#define AF7_PA11_USART1_CTS	(unsigned)0x7
#define AF7_PA12_USART1_RTS	(unsigned)0x7
//			AF5_PA13 - don't available
//			AF5_PA14 - don't available
//			AF5_PA15 - don't available
	 

#endif
