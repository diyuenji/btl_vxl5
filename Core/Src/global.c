/*
 * global.c
 *
 *  Created on: Dec 14, 2022
 *      Author: Admin
 */
#include "global.h"

uint8_t temp = 0;
uint8_t index_buffer = 0;
uint8_t buffer_flag = 0;
int state=WAITING_REQ;
int ADC_value=0;

char str[50]={};
u_int8_t buffer[ MAX_BUFFER_SIZE ];
