/*
 * seg7.c
 *
 *  Created on: Sep 10, 2024
 *      Author: 84859
 */
#include "seg7.h"

 void update7SEG ( int index, int led_buffer[]){
	  		 switch ( index ){
	  		 case 0:
	  		 // Display the first 7 SEG with led_buffer [0]
	  			 display7SEG(led_buffer[0]);
	  			 HAL_GPIO_WritePin(EN0_GPIO_Port, EN0_Pin,RESET);
	  			 HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin,SET);
	  			 HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin,SET);
	  			 HAL_GPIO_WritePin(EN3_GPIO_Port, EN3_Pin,SET);

	  		 break ;
	  		 case 1:
	  			 display7SEG(led_buffer[1]);
	  			 HAL_GPIO_WritePin(EN0_GPIO_Port, EN0_Pin,SET);
	  			 HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin,RESET);
	  			 HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin,SET);
	  			 HAL_GPIO_WritePin(EN3_GPIO_Port, EN3_Pin,SET);
	  		  // Display the second 7 SEG with led_buffer [1]
	  		  break ;
	  		  case 2:
	  			  display7SEG(led_buffer[2]);
	  				 HAL_GPIO_WritePin(EN0_GPIO_Port, EN0_Pin,SET);
	  				 HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin,SET);
	  				 HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin,RESET);
	  				 HAL_GPIO_WritePin(EN3_GPIO_Port, EN3_Pin,SET);
	  		  // Display the third 7 SEG with led_buffer [2]
	  		  break ;
	  		  case 3:
	  			  display7SEG(led_buffer[3]);
	  				 HAL_GPIO_WritePin(EN0_GPIO_Port, EN0_Pin,SET);
	  				 HAL_GPIO_WritePin(EN1_GPIO_Port, EN1_Pin,SET);
	  				 HAL_GPIO_WritePin(EN2_GPIO_Port, EN2_Pin,SET);
	  				 HAL_GPIO_WritePin(EN3_GPIO_Port, EN3_Pin,RESET);
	  		  // Display the forth 7 SEG with led_buffer [3]
	  		  break ;
	  		  default :
	  		  break ;
	  		  }
	  	}

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

