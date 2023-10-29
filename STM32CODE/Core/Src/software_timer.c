/*
 * software_timer.c
 *
 *  Created on: Oct 4, 2023
 *      Author: Duyen
 */

#ifndef SRC_SOFTWARE_TIMER_C_
#define SRC_SOFTWARE_TIMER_C_

#include "software_timer.h"

int timer1_counter = 0;
int timer1_flag = 0;

void setTimer1(int duration)
{
	timer1_counter = duration;
	timer1_flag = 0;
}
void timerRun()
{
	timer1_counter--;
	if(timer1_counter <= 0)
	{
		timer1_flag = 1;
	}
}

#endif /* SRC_SOFTWARE_TIMER_C_ */
