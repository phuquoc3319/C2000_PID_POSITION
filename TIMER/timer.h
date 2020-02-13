/*
 * timer.h
 *
 *  Created on: Jan 22, 2020
 *      Author: RICHARD
 */

#ifndef TIMER_TIMER_H_
#define TIMER_TIMER_H_


#include "driverlib.h"
#include "device.h"


void TIMER0_Init(void);
void TIMER1_Init(void);
void TIMER2_Init(void);
void TIMER_Config(uint32_t cpuTimer, float freq, float period);


#endif /* TIMER_TIMER_H_ */
