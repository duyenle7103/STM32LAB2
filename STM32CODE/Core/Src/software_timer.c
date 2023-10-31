/*
 * software_timer.c
 *
 *  Created on: Oct 4, 2023
 *      Author: Duyen
 */

#ifndef SRC_SOFTWARE_TIMER_C_
#define SRC_SOFTWARE_TIMER_C_

#include "software_timer.h"

int timer4_counter = 0;
int timer4_flag = 0;
int timer5_counter = 0;
int timer5_flag = 0;

void setTimer4(int duration)
{
	timer4_counter = duration;
	timer4_flag = 0;
}
void timer4Run()
{
	timer4_counter--;
	if(timer4_counter <= 0)
	{
		timer4_flag = 1;
	}
}
void setTimer5(int duration)
{
	timer5_counter = duration;
	timer5_flag = 0;
}
void timer5Run()
{
	timer5_counter--;
	if(timer5_counter <= 0)
	{
		timer5_flag = 1;
	}
}

#endif /* SRC_SOFTWARE_TIMER_C_ */
