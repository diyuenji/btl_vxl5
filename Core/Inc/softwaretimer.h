/*
 * softwaretimer.h
 *
 *  Created on: Dec 24, 2022
 *      Author: Admin
 */

#ifndef INC_SOFTWARETIMER_H_
#define INC_SOFTWARETIMER_H_

extern int timer1_flag;
extern int timer2_flag;

void setTimer1(int duration);
void setTimer2(int duration);

void timerRun1();
void timerRun2();

#endif /* INC_SOFTWARETIMER_H_ */
