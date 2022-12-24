/*
 * uart_communiation_fsm.c
 *
 *  Created on: Dec 24, 2022
 *      Author: Admin
 */

# include "uart_communiation_fsm.h"

void uart_communiation_fsm(){
	switch(state){
	case SENDING_VAL:
		if(timer1_flag==1){
			HAL_UART_Transmit (& huart2 , ( void *) str , sprintf ( str , " !ADC=%d\n# ", ADC_value ) , 1000) ;
			setTimer1(300);
		}
	default:

		break;
	}
}
