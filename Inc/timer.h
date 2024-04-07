/*
 * timer.h
 *
 *  Created on: Mar 3, 2024
 *      Author: Pee
 */

#ifndef TIMER_H_
#define TIMER_H_

#include "stm32g0b1xx.h"

void configureTimer2(void);
void configureTimer3(void);
void stop_timer(TIM_TypeDef *TIMx);
uint16_t read_TIM(TIM_TypeDef *TIMx);
void delayms( uint32_t ms );


#endif /* TIMER_H_ */
