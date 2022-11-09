/*
 * global.h
 *
 *  Created on: Nov 8, 2022
 *      Author: lephu
 */

#ifndef INC_GLOBAL_H_
#define INC_GLOBAL_H_

#include "stdint.h"

/* Traffic Time ----- */
extern int time_road1;
extern int time_road2;

/* Timer -----*/
#define NO_Timer 6 //Number of timer
#define TIME_CYCLE 10 //Time Cycle = 10ms
#define TIME_UNIT 1000 //1s = 1000ms

/* LED -----*/
#define NO_LED 6 //Number of LED
#define NO_EN 4 //Number of 7SEG

/* Function -----*/
//Check index (0 <= Index < max)
int checkIndex(int index, int max);

#endif /* INC_GLOBAL_H_ */
