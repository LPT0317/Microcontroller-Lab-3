/*
 * timer_interrupt.h
 *
 *  Created on: Nov 8, 2022
 *      Author: lephu
 */

#ifndef INC_TIMER_INTERRUPT_H_
#define INC_TIMER_INTERRUPT_H_

/* Includes -----*/
#include "global.h"

/* Function -----*/
//Set time on timer[index] = duration
void setTimer(int duration, int index);
//Check timer out on timer[index]
int isTimerOut(int index);
//Run timer (counter on timer)
void timerRun(void);

#endif /* INC_TIMER_INTERRUPT_H_ */
