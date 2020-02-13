/*
 * pwm.h
 *
 *  Created on: Jan 22, 2020
 *      Author: RICHARD
 */

#ifndef PWM_PWM_H_
#define PWM_PWM_H_


#include "driverlib.h"
#include "device.h"

void PWM1_Init(void);
void PWM_Control(int32_t Duty);


#endif /* PWM_PWM_H_ */
