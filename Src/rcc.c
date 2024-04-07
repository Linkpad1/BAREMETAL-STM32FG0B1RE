/*
 * rcc.c
 *
 *  Created on: Feb 4, 2024
 *      Author: Pee
 */



#include "rcc.h"


/* CLOCK_Init
 * System clock source HSI
 * APB1 prescaler 1
 *
 * Register affected: RCC_CFGR
 *
 */
void SetSystemClockTo16Mhz(void)
{

	 /* Enabling the HSI clock - If not enabled and ready */
	  if( (RCC->CR & RCC_CR_HSIRDY) == 0)
	  {
	    RCC->CR |= RCC_CR_HSION;  /* HSION=1 */

	    /* Waiting until HSI clock is ready */
	    while( (RCC->CR & RCC_CR_HSIRDY) == 0);
	  }

	  /* Select AHB prescaler to 1 */
	  RCC->CFGR |= RCC_CFGR_HPRE_1;

	  /* Select AHB prescaler to 3 */
	  RCC->CFGR |= RCC_CFGR_MCOSEL_3;

	  /* APB prescaler to 1 */
	  RCC->CFGR |= RCC_CFGR_PPRE_1;

	  /* Select the HSI as system clock source */
	  RCC->CFGR &= (uint32_t)((uint32_t)~(RCC_CFGR_SW));
	  RCC->CFGR |= RCC_CFGR_SWS_HSISYS;

	  /* Disabling HSE Clock*/
	  RCC->CR &= ~RCC_CR_HSEON;

}






