/*
 * software_timer.h
 *
 *  Created on: Oct 4, 2023
 *      Author: Duyen
 */

#ifndef INC_SOFTWARE_TIMER_H_
#define INC_SOFTWARE_TIMER_H_

extern int timer1_flag;
extern int timer2_flag;

void setTimer1(int duration);
void timer1Run();
void setTimer2(int duration);
void timer2Run();

#endif /* INC_SOFTWARE_TIMER_H_ */
