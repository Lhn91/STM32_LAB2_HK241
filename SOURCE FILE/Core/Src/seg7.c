/*
 * seg7.c
 *
 *  Created on: Sep 10, 2024
 *      Author: 84859
 */
#include "seg7.h"
void display7SEG(int num){
	switch(num){
		 case 0:
			 HAL_GPIO_WritePin(seg1_GPIO_Port, seg1_Pin, GPIO_PIN_RESET);
			   HAL_GPIO_WritePin(seg2_GPIO_Port, seg2_Pin, GPIO_PIN_RESET);
			   HAL_GPIO_WritePin(seg3_GPIO_Port, seg3_Pin, GPIO_PIN_RESET);
			   HAL_GPIO_WritePin(seg4_GPIO_Port, seg4_Pin, GPIO_PIN_RESET);
			   HAL_GPIO_WritePin(seg5_GPIO_Port, seg5_Pin, GPIO_PIN_RESET);
			   HAL_GPIO_WritePin(seg6_GPIO_Port, seg6_Pin, GPIO_PIN_RESET);
			   HAL_GPIO_WritePin(seg7_GPIO_Port, seg7_Pin, GPIO_PIN_SET);

			   break;

		 case 1:
			 HAL_GPIO_WritePin(seg2_GPIO_Port, seg2_Pin, GPIO_PIN_RESET);
			HAL_GPIO_WritePin(seg3_GPIO_Port, seg3_Pin, GPIO_PIN_RESET);


			HAL_GPIO_WritePin(seg1_GPIO_Port, seg1_Pin, GPIO_PIN_SET);
			  HAL_GPIO_WritePin(seg4_GPIO_Port, seg4_Pin, GPIO_PIN_SET);
			  HAL_GPIO_WritePin(seg5_GPIO_Port, seg5_Pin, GPIO_PIN_SET);
			  HAL_GPIO_WritePin(seg6_GPIO_Port, seg6_Pin, GPIO_PIN_SET);
			  HAL_GPIO_WritePin(seg7_GPIO_Port, seg7_Pin, GPIO_PIN_SET);

			  break;


		 case 2:
			 HAL_GPIO_WritePin(seg1_GPIO_Port, seg1_Pin, GPIO_PIN_RESET);
					   HAL_GPIO_WritePin(seg2_GPIO_Port, seg2_Pin, GPIO_PIN_RESET);
					   HAL_GPIO_WritePin(seg4_GPIO_Port, seg4_Pin, GPIO_PIN_RESET);
					  		   HAL_GPIO_WritePin(seg5_GPIO_Port, seg5_Pin, GPIO_PIN_RESET);
					  		 HAL_GPIO_WritePin(seg7_GPIO_Port, seg7_Pin, GPIO_PIN_RESET);



					  		  HAL_GPIO_WritePin(seg3_GPIO_Port, seg3_Pin, GPIO_PIN_SET);
					  		  HAL_GPIO_WritePin(seg6_GPIO_Port, seg6_Pin, GPIO_PIN_SET);
					  		  break;

		 case 3:
			 HAL_GPIO_WritePin(seg1_GPIO_Port, seg1_Pin, GPIO_PIN_RESET);
					   HAL_GPIO_WritePin(seg2_GPIO_Port, seg2_Pin, GPIO_PIN_RESET);
					   HAL_GPIO_WritePin(seg3_GPIO_Port, seg3_Pin, GPIO_PIN_RESET);
					   HAL_GPIO_WritePin(seg4_GPIO_Port, seg4_Pin, GPIO_PIN_RESET);
					   HAL_GPIO_WritePin(seg5_GPIO_Port, seg5_Pin, GPIO_PIN_SET);
					   HAL_GPIO_WritePin(seg6_GPIO_Port, seg6_Pin, GPIO_PIN_SET);
					   HAL_GPIO_WritePin(seg7_GPIO_Port, seg7_Pin, GPIO_PIN_RESET);
					   break;


		 case 4:
			 HAL_GPIO_WritePin(seg1_GPIO_Port, seg1_Pin, GPIO_PIN_SET);
					   HAL_GPIO_WritePin(seg2_GPIO_Port, seg2_Pin, GPIO_PIN_RESET);
					   HAL_GPIO_WritePin(seg3_GPIO_Port, seg3_Pin, GPIO_PIN_RESET);
					   HAL_GPIO_WritePin(seg4_GPIO_Port, seg4_Pin, GPIO_PIN_SET);
					   HAL_GPIO_WritePin(seg5_GPIO_Port, seg5_Pin, GPIO_PIN_SET);
					   HAL_GPIO_WritePin(seg6_GPIO_Port, seg6_Pin, GPIO_PIN_RESET);
					   HAL_GPIO_WritePin(seg7_GPIO_Port, seg7_Pin, GPIO_PIN_RESET);

					   break;


		 case 5:
			 HAL_GPIO_WritePin(seg1_GPIO_Port, seg1_Pin, GPIO_PIN_RESET);
					   HAL_GPIO_WritePin(seg2_GPIO_Port, seg2_Pin, GPIO_PIN_SET);
					   HAL_GPIO_WritePin(seg3_GPIO_Port, seg3_Pin, GPIO_PIN_RESET);
					   HAL_GPIO_WritePin(seg4_GPIO_Port, seg4_Pin, GPIO_PIN_RESET);
					   HAL_GPIO_WritePin(seg5_GPIO_Port, seg5_Pin, GPIO_PIN_SET);
					   HAL_GPIO_WritePin(seg6_GPIO_Port, seg6_Pin, GPIO_PIN_RESET);
					   HAL_GPIO_WritePin(seg7_GPIO_Port, seg7_Pin, GPIO_PIN_RESET);
					   break;


		 case 6:
			 HAL_GPIO_WritePin(seg1_GPIO_Port, seg1_Pin, GPIO_PIN_RESET);
					   HAL_GPIO_WritePin(seg2_GPIO_Port, seg2_Pin, GPIO_PIN_SET);
					   HAL_GPIO_WritePin(seg3_GPIO_Port, seg3_Pin, GPIO_PIN_RESET);
					   HAL_GPIO_WritePin(seg4_GPIO_Port, seg4_Pin, GPIO_PIN_RESET);
					   HAL_GPIO_WritePin(seg5_GPIO_Port, seg5_Pin, GPIO_PIN_RESET);
					   HAL_GPIO_WritePin(seg6_GPIO_Port, seg6_Pin, GPIO_PIN_RESET);
					   HAL_GPIO_WritePin(seg7_GPIO_Port, seg7_Pin, GPIO_PIN_RESET);
					   break;


		 case 7:
			 HAL_GPIO_WritePin(seg1_GPIO_Port, seg1_Pin, GPIO_PIN_RESET);
					   HAL_GPIO_WritePin(seg2_GPIO_Port, seg2_Pin, GPIO_PIN_RESET);
					   HAL_GPIO_WritePin(seg3_GPIO_Port, seg3_Pin, GPIO_PIN_RESET);
					   HAL_GPIO_WritePin(seg4_GPIO_Port, seg4_Pin, GPIO_PIN_SET);
					   HAL_GPIO_WritePin(seg5_GPIO_Port, seg5_Pin, GPIO_PIN_SET);
					   HAL_GPIO_WritePin(seg6_GPIO_Port, seg6_Pin, GPIO_PIN_SET);
					   HAL_GPIO_WritePin(seg7_GPIO_Port, seg7_Pin, GPIO_PIN_SET);
					   break;

		 case 8:
			 HAL_GPIO_WritePin(seg1_GPIO_Port, seg1_Pin, GPIO_PIN_RESET);
					   HAL_GPIO_WritePin(seg2_GPIO_Port, seg2_Pin, GPIO_PIN_RESET);
					   HAL_GPIO_WritePin(seg3_GPIO_Port, seg3_Pin, GPIO_PIN_RESET);
					   HAL_GPIO_WritePin(seg4_GPIO_Port, seg4_Pin, GPIO_PIN_RESET);
					   HAL_GPIO_WritePin(seg5_GPIO_Port, seg5_Pin, GPIO_PIN_RESET);
					   HAL_GPIO_WritePin(seg6_GPIO_Port, seg6_Pin, GPIO_PIN_RESET);
					   HAL_GPIO_WritePin(seg7_GPIO_Port, seg7_Pin, GPIO_PIN_RESET);
					   break;

		 case 9:
			 HAL_GPIO_WritePin(seg1_GPIO_Port, seg1_Pin, GPIO_PIN_RESET);
					   HAL_GPIO_WritePin(seg2_GPIO_Port, seg2_Pin, GPIO_PIN_RESET);
					   HAL_GPIO_WritePin(seg3_GPIO_Port, seg3_Pin, GPIO_PIN_RESET);
					   HAL_GPIO_WritePin(seg4_GPIO_Port, seg4_Pin, GPIO_PIN_RESET);
					   HAL_GPIO_WritePin(seg5_GPIO_Port, seg5_Pin, GPIO_PIN_SET);
					   HAL_GPIO_WritePin(seg6_GPIO_Port, seg6_Pin, GPIO_PIN_RESET);
					   HAL_GPIO_WritePin(seg7_GPIO_Port, seg7_Pin, GPIO_PIN_RESET);
					   break;


		 }
}

