/********************************************************************************
  * @file    /stm32f4xx_gpio_def.h
  * @author  KoliaMor@tut.by
  * @version v1.0.1
  * @date    28/06/2018
  * @brief   stm32f4xx gpio macro definition
  ******************************************************************************
*/

#ifndef __STM32F4xx_GPIO_DEF_H
#define __STM32F4xx_GPIO_DEF_H

/*PORT CONFIGURATION GPIOx_MODER*/
#define INPUT					(unsigned)0x0	//00
#define OUTPUT				(unsigned)0x1	//01
#define ALTERN				(unsigned)0x2	//10
#define ANALOG				(unsigned)0x3	//11
/*PORT CONFIGURATION GPIOx_OTYPER*/
#define TYPE_NU				(unsigned)0x0	//0 - Not Used
#define PUSHPULL			(unsigned)0x0	//0
#define OPENDRAIN			(unsigned)0x1	//1
/*PORT CONFIGURATION  GPIOx_OSPEEDR*/
#define SPD_NU				(unsigned)0x0	//00 - Not Used
#define SPD_LOW				(unsigned)0x0	//00
#define SPD_MEDIUM		(unsigned)0x1	//01
#define SPD_HIGH			(unsigned)0x3	//11
/*PORT CONFIGURATION GPIOx_PUPDR*/
#define PULL_NU				(unsigned)0x0	//00
#define PULL_UP				(unsigned)0x1	//01
#define PULL_DOWN			(unsigned)0x2	//10
#define PULL_RESV			(unsigned)0x3	//11
/*PORT CONFIGURATION GPIOx_AFRL GPIOx_AFRH*/
#include "stm32f4xx_afr_def.h"

#define PINIT(port,\
m0,t0,s0,p0,a0,\
m1,t1,s1,p1,a1,\
m2,t2,s2,p2,a2,\
m3,t3,s3,p3,a3,\
m4,t4,s4,p4,a4,\
m5,t5,s5,p5,a5,\
m6,t6,s6,p6,a6,\
m7,t7,s7,p7,a7,\
m8,t8,s8,p8,a8,\
m9,t9,s9,p9,a9,\
m10,t10,s10,p10,a10,\
m11,t11,s11,p11,a11,\
m12,t12,s12,p12,a12,\
m13,t13,s13,p13,a13,\
m14,t14,s14,p14,a14,\
m15,t15,s15,p15,a15)\
{port->MODER 	=     m0     | (m1<<2)	| (m2<<4)  | (m3<<6)   | (m4<<8)   | (m5<<10)  | (m6<<12)  | (m7<<14) |\
	                (m8<<16) | (m9<<18) | (m10<<20)| (m11<<22) | (m12<<24) | (m13<<26) | (m14<<28) | (m15<<30);\
\
port->OTYPER  =     t0     | (t1<<1)	| (t2<<2)  | (t3<<3)   | (t4<<4)   | (t5<<5)   | (t6<<6)   | (t7<<7) |\
	                (t8<<8)  | (t9<<9)  | (t10<<10)| (t11<<11) | (t12<<12) | (t13<<13) | (t14<<14) | (t15<<15);\
\
port->OSPEEDR =     s0     | (s1<<2)	| (s2<<4)  | (s3<<6)   | (s4<<8)   | (s5<<10)  | (s6<<12)  | (s7<<14) |\
	                (s8<<16) | (s9<<18) | (s10<<20)| (s11<<22) | (s12<<24) | (s13<<26) | (s14<<28) | (s15<<30);\
\
port->PUPDR   =     p0     | (p1<<2)	| (p2<<4)  | (p3<<6)   | (p4<<8)   | (p5<<10)  | (p6<<12)  | (p7<<14) |\
	                (p8<<16) | (p9<<18) | (p10<<20)| (p11<<22) | (p12<<24) | (p13<<26) | (p14<<28) | (p15<<30);\
\
port->AFR[0]	=     a0     |  (a1<<4)	| (a2<<8)	 | (a3<<12)  | (a4<<16)	 | (a5<<20)  | (a6<<24)	 | (a7<<28);\
\
port->AFR[1]	=     a8     |  (a9<<4)	| (a10<<8) | (a11<<12) | (a12<<16) | (a13<<20) | (a14<<24) | (a15<<28);\
}

#define pinAFRL(pin,afr) ((uint32_t)afr<<((pin&0x7)*4))
#define pinAFRH(pin,afr) ((uint32_t)afr<<(((pin-8)&0x7)*4))

#endif
