/*
 * led_matrix.h
 *
 *  Created on: Sep 13, 2024
 *      Author: 84859
 */

#ifndef INC_LED_MATRIX_H_
#define INC_LED_MATRIX_H_

#include "main.h"
#include <stdlib.h>
void updateLEDMatrix (int index,uint8_t matrix_buffer_col[], uint8_t matrix_buffer_row[]);
void updateLEDMatrix_left(int index, uint8_t matrix_buffer_col[], uint8_t matrix_buffer_row[], int move);
void resetRow();
void resetCol();
#endif /* INC_LED_MATRIX_H_ */
