/*
 * led_matrix.c
 *
 *  Created on: Sep 13, 2024
 *      Author: 84859
 */
//{0xE7, 0xC3, 0x99, 0x99, 0x81, 0x81, 0x99, 0x99};ROW
//{0xFE, 0xFD, 0xFB, 0xF7, 0xEF, 0xDF, 0xBF, 0x7F};COL
#include "led_matrix.h"
const int MAX_LED_MATRIX = 8;
int index_led_matrix = 0;


uint8_t* convert_to_binary_array(uint8_t value) {
    uint8_t* binary_array = (uint8_t*)malloc(8 * sizeof(uint8_t));

    if (binary_array == NULL) {
        return NULL;
    }

    for (int i = 0; i < 8; i++) {
        binary_array[i] = (value >> (7 - i)) & 0x01;
    }

    return binary_array;
}
void resetRow(){
	HAL_GPIO_WritePin(ROW0_GPIO_Port, ROW0_Pin, RESET);
	HAL_GPIO_WritePin(ROW1_GPIO_Port, ROW1_Pin, RESET);
		HAL_GPIO_WritePin(ROW2_GPIO_Port, ROW2_Pin, RESET);
		HAL_GPIO_WritePin(ROW3_GPIO_Port, ROW3_Pin, RESET);
		HAL_GPIO_WritePin(ROW4_GPIO_Port, ROW4_Pin, RESET);
		HAL_GPIO_WritePin(ROW5_GPIO_Port, ROW5_Pin, RESET);
		HAL_GPIO_WritePin(ROW6_GPIO_Port, ROW6_Pin, RESET);
		HAL_GPIO_WritePin(ROW7_GPIO_Port, ROW7_Pin, RESET);
}

void getRow(uint8_t* binary_array) {
    for (int i = 0; i < 8; i++) {
        if (binary_array[i] == 1) {
           switch(i){
          case 0:HAL_GPIO_WritePin(ROW0_GPIO_Port, ROW0_Pin, SET);
                   	   	   	   break ;
		  case 1:HAL_GPIO_WritePin(ROW1_GPIO_Port, ROW1_Pin, SET);
					   break ;
		  case 2:HAL_GPIO_WritePin(ROW2_GPIO_Port, ROW2_Pin, SET);
					   break ;
		  case 3:HAL_GPIO_WritePin(ROW3_GPIO_Port, ROW3_Pin, SET);
					   break ;
		  case 4:HAL_GPIO_WritePin(ROW4_GPIO_Port, ROW4_Pin, SET);
					   break ;
		  case 5:HAL_GPIO_WritePin(ROW5_GPIO_Port, ROW5_Pin, SET);
					   break ;
		  case 6:HAL_GPIO_WritePin(ROW6_GPIO_Port, ROW6_Pin, SET);
                              	   break ;
		  case 7:HAL_GPIO_WritePin(ROW7_GPIO_Port, ROW7_Pin, SET);
                   	   break ;
           }
        }
    }
}

void resetCol(){
	HAL_GPIO_WritePin(ENM0_GPIO_Port, ENM0_Pin, RESET);
	HAL_GPIO_WritePin(ENM1_GPIO_Port, ENM1_Pin, RESET);
	HAL_GPIO_WritePin(ENM2_GPIO_Port, ENM2_Pin, RESET);
	HAL_GPIO_WritePin(ENM3_GPIO_Port, ENM3_Pin, RESET);
	HAL_GPIO_WritePin(ENM4_GPIO_Port, ENM4_Pin, RESET);
	HAL_GPIO_WritePin(ENM5_GPIO_Port, ENM5_Pin, RESET);
	HAL_GPIO_WritePin(ENM6_GPIO_Port, ENM6_Pin, RESET);
	HAL_GPIO_WritePin(ENM7_GPIO_Port, ENM7_Pin, RESET);
}

void getCol(uint8_t* binary_array) {
	for (int i = 0; i < 8; i++) {
	        if (binary_array[i] == 0) {
	          switch(i){
	           case 0:HAL_GPIO_WritePin(ENM0_GPIO_Port, ENM0_Pin, SET);
	           	        	   	   	   break ;
	           case 1:HAL_GPIO_WritePin(ENM1_GPIO_Port, ENM1_Pin, SET);
	           	                   	   break ;
	           case 2:HAL_GPIO_WritePin(ENM2_GPIO_Port, ENM2_Pin, SET);
	           	                   	   break ;
	           case 3:HAL_GPIO_WritePin(ENM3_GPIO_Port, ENM3_Pin, SET);
	           	                   	   break ;
	           case 4:HAL_GPIO_WritePin(ENM4_GPIO_Port, ENM4_Pin, SET);
	           	                   	   break ;
	           case 5:HAL_GPIO_WritePin(ENM5_GPIO_Port, ENM5_Pin, SET);
	           	                   	   break ;
	           case 6:HAL_GPIO_WritePin(ENM6_GPIO_Port, ENM6_Pin, SET);
	           	                   	   break ;
	           case 7:HAL_GPIO_WritePin(ENM7_GPIO_Port, ENM7_Pin, SET);
	           	                   	   break ;
	          }
	        }

	 }
}

 void updateLEDMatrix (int index, uint8_t matrix_buffer_col[], uint8_t matrix_buffer_row[]){
	 uint8_t *binary_array_row = convert_to_binary_array(matrix_buffer_row[index]);
	 uint8_t *binary_array_col = convert_to_binary_array(matrix_buffer_col[index]);
	   if (binary_array_row == NULL || binary_array_col == NULL) {
	        return;
	    }
	 getRow(binary_array_row);
	 getCol(binary_array_col);
	 free(binary_array_row);
	 free(binary_array_col);
}


