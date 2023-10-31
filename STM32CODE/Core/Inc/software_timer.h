/*
 * software_timer.h
 *
 *  Created on: Oct 4, 2023
 *      Author: Duyen
 */

#ifndef INC_SOFTWARE_TIMER_H_
#define INC_SOFTWARE_TIMER_H_

extern int timer4_flag;
extern int timer5_flag;

void setTimer4(int duration);
void timer4Run();
void setTimer5(int duration);
void timer5Run();

#endif /* INC_SOFTWARE_TIMER_H_ */
