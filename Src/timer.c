/*
 * timer.c
 *
 * author: Furkan Cayci
 * description:
 *   blinks LEDs one at a time using timer interrupt
 *   timer2 is used as the source, and it is setup
 *   to run at 10 kHz. LED blinking rate is set to
 *   1 second.
 *
 * timer and timer interrupt setup steps:
 *   1. Enable TIMx clock from RCC
 *   2. Set prescaler for the timer from PSC
 *   3. Set auto-reload value from ARR
 *   4. (optional) Enable update interrupt from DIER bit 0
 *   5. (optional) Enable TIMx interrupt from NVIC
 *   6. Enable TIMx module from CR1 bit 0
 */
#include "timer.h"
#include "stm32g0xx.h"

/*************************************************
* function declarations
*************************************************/

// 100Hz clock signal for 1 second count (0-100)
void configureTimer2(void)
{
  /* Enable the APB clock FOR TIM3  */
  SET_BIT(RCC->AHBENR, RCC_APBENR1_TIM2EN);

  /* fCK_PSC / (PSC[15:0] + 1)
     (16 MHz / (15+1)) = 1 MHz timer clock speed */
  TIM2->PSC = 150000;

  /* (100Hz) = 100ms */
  /* So, this will generate the 100ms delay */
  TIM2->ARR = 99;

  /* Enable Timer */
  TIM2->CR1 = (1 << 0);
}


// 1ms clock signal for Varistor read function*
void configureTimer3(void)
{
  /* Enable the APB clock FOR TIM3  */
  SET_BIT(RCC->AHBENR, RCC_APBENR1_TIM2EN);

  /* fCK_PSC / (PSC[15:0] + 1)
     (16 MHz / (15+1)) = 1 MHz timer clock speed */
  TIM3->PSC = 15;

  /* (1 MHz / 1000) = 1KHz = 1ms */
  /* So, this will generate the 1ms delay */
  TIM3->ARR = 999;

  /* Finally enable TIM3 module */
  TIM3->CR1 = (1 << 0);
}


void stop_timer(TIM_TypeDef *TIMx) {
  // Turn off the timer.
  TIMx->CR1 &= ~(TIM_CR1_CEN);
  // Clear the 'pending update interrupt' flag, just in case.
  TIMx->SR  &= ~(TIM_SR_UIF);
}


uint16_t read_TIM(TIM_TypeDef *TIMx) {
  return TIMx->CNT;

  }

// create 0.1s delay
void delayms( uint32_t ms )
{
  uint32_t i;
  for( i = 0; i <= ms; i++ )
  {
    /* Clear the count */
    TIM2->CNT = 0;

    /* Wait UIF to be set */
    while((TIM2->SR & TIM_SR_UIF) == 0);    /* This will generate 1ms delay */

    /* Reset UIF */
    TIM2->SR &= ~TIM_SR_UIF;
  }
}



