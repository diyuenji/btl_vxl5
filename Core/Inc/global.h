/*
 * global.h
 *
 *  Created on: Dec 14, 2022
 *      Author: Admin
 */

#ifndef INC_GLOBAL_H_
#define INC_GLOBAL_H_

#include "stdio.h"
#include "softwaretimer.h"
#include "main.h"

# define MAX_BUFFER_SIZE 30

# define WAITING_REQ 0
# define SENDING_VAL 1

extern uint8_t temp ;
extern uint8_t buffer [ MAX_BUFFER_SIZE ];

extern int ADC_value ;

extern char str[50];

extern uint8_t index_buffer ;
extern uint8_t buffer_flag ;

extern int state;

#endif /* INC_GLOBAL_H_ */
