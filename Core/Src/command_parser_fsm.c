/*
 * command_parser_fsm.c
 *
 *  Created on: Dec 14, 2022
 *      Author: Admin
 */

#include"command_parser_fsm.h"
char str1[]={'!','R','T','X','#'};
char str2[]={'!','O','K','#'};
int a=0,b=0;
void command_parser_fsm(){
	switch(state)
	{
	case WAITING_REQ:
		if(buffer[(index_buffer-1)%MAX_BUFFER_SIZE]==str1[a]){
			if(a==4){
				setTimer1(10);
				state=SENDING_VAL;
				a=0;
				ADC_value = HAL_ADC_GetValue (& hadc1 ) ;
			}
			else a++;
		}
		else a=0;
			break;
	case SENDING_VAL:
		if(buffer[(index_buffer-1)%MAX_BUFFER_SIZE]==str2[b]){
			if(b==3){
				state=WAITING_REQ;
				b=0;
			}
			else b++;
		}
		else b=0;
		break;
	default:
		break;

	}
}
