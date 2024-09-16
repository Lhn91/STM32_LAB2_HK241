/*
 * software_timer.c
 *
 *  Created on: Sep 11, 2024
 *      Author: 84859
 */
#include "software_timer.h"

int timer1_counter[10];
int timer1_flag[10];

void setTimer1(int duration, int index){
	timer1_counter[index] = duration/10;
	timer1_flag[index] = 0;
}

void timerRun(){
	for(int i =0; i<=10; i++){ //TOI UU HOA ----> O(1)
	if(timer1_counter[i] > 0){
		timer1_counter[i]--;
		if(timer1_counter[i] == 0){
			timer1_flag[i] = 1;
		}
	}
}
}

