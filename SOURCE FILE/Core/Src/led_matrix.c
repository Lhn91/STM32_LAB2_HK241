/*
 * led_matrix.c
 *
 *  Created on: Sep 13, 2024
 *      Author: 84859
 */
#include "led_matrix.h"

const int MAX_LED_MATRIX = 8;
int index_led_matrix = 0;
unsigned int matrix_buffer [8] = {0x01 , 0x02 , 0x04 , 0x08 , 0x10 , 0x20 , 0x40 , 0x80};
unsigned int chuK[8]={0xFF00,0x7E00,0x3C00,0x9900,0xC300,0x0000,0x0000,0xFF00};
 void updateLEDMatrix (int index){
	 switch (index){
 	 case 0:
 		 HAL_GPIO_WritePin(ENM0_GPIO_Port,ENM0_Pin, matrix_buffer[0]);
 		HAL_GPIO_WritePin(GPIOB, chuK[0], SET);
 break ;

 	 case 1:
 		HAL_GPIO_WritePin(ENM1_GPIO_Port,ENM1_Pin, matrix_buffer[1]<<1);
 		HAL_GPIO_WritePin(GPIOB, chuK[1], SET);
 break ;

 	 case 2:
 		HAL_GPIO_WritePin(ENM2_GPIO_Port,ENM2_Pin, matrix_buffer[2]<<2);
 		HAL_GPIO_WritePin(GPIOB, chuK[2], SET);
 break ;

 	 case 3:
 		HAL_GPIO_WritePin(ENM3_GPIO_Port,ENM3_Pin, matrix_buffer[3]<<3);
 		HAL_GPIO_WritePin(GPIOB, chuK[3], SET);
 break ;

 	 case 4:
 		HAL_GPIO_WritePin(ENM4_GPIO_Port,ENM4_Pin, matrix_buffer[4]<<4);
 		HAL_GPIO_WritePin(GPIOB, chuK[4], SET);
 break ;

 	 case 5:
 		HAL_GPIO_WritePin(ENM5_GPIO_Port,ENM5_Pin, matrix_buffer[5]<<5);
 		HAL_GPIO_WritePin(GPIOB, chuK[5], SET);
 break ;

 	 case 6:
 		HAL_GPIO_WritePin(ENM6_GPIO_Port,ENM6_Pin, matrix_buffer[6]<<6);
 		HAL_GPIO_WritePin(GPIOB, chuK[6], SET);
 break ;

 	 case 7:
 		HAL_GPIO_WritePin(ENM7_GPIO_Port,ENM7_Pin, matrix_buffer[7]<<7);
 		HAL_GPIO_WritePin(GPIOB, chuK[7], SET);
 break ;

 	 default :
 break ;
  }
};


