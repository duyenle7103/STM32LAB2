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
int timer2_counter = 0;
int timer2_flag = 0;
int timer3_counter = 0;
int timer3_flag = 0;

void setTimer1(int duration)
{
	timer1_counter = duration;
	timer1_flag = 0;
}
void timer1Run()
{
	timer1_counter--;
	if(timer1_counter <= 0)
	{
		timer1_flag = 1;
	}
}
void setTimer2(int duration)
{
	timer2_counter = duration;
	timer2_flag = 0;
}
void timer2Run()
{
	timer2_counter--;
	if(timer2_counter <= 0)
	{
		timer2_flag = 1;
	}
}
void setTimer3(int duration)
{
	timer3_counter = duration;
	timer3_flag = 0;
}
void timer3Run()
{
	timer3_counter--;
	if(timer3_counter <= 0)
	{
		timer3_flag = 1;
	}
}

#endif /* SRC_SOFTWARE_TIMER_C_ */
