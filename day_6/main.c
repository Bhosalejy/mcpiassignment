/**
 ******************************************************************************
 * @file           : main.c
 * @author         : Auto-generated by STM32CubeIDE
 * @brief          : Main program body
 ******************************************************************************
 * @attention
 *
 * Copyright (c) 2024 STMicroelectronics.
 * All rights reserved.
 *
 * This software is licensed under terms that can be found in the LICENSE file
 * in the root directory of this software component.
 * If no LICENSE file comes with this software, it is provided AS-IS.
 *
 ******************************************************************************
 */

#include <stdint.h>
#include <stdio.h>
#include "stm32f4xx.h"
#include "system_stm32f4xx.h"

#include "lcd.h"
#include "switch.h"

#if !defined(__SOFT_FP__) && defined(__ARM_FP)
  #warning "FPU is not initialized, but the project is compiling for an FPU. Please initialize the FPU before use."
#endif
extern volatile int count_flag;
int c = 0;
char str[16];

int main(void)
{
	SystemInit();
	SwitchInit(SWITCH);
	LcdInit();

	while(1) {
		LcdPuts(LCD_LINE1, "COUNT");
		if(count_flag == 1)
			c++;
		sprintf(str,"%d",c);
		LcdPuts(LCD_LINE2, str);
		count_flag = 0;
	}
	return 0;
}









