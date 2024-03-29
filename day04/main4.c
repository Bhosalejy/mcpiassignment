/*
 * main4.c
 *
 *  Created on: Mar 29, 2024
 *      Author: sunbeam
 */

#include <stdint.h>
#include <stdio.h>
#include "stm32f4xx.h"
#include "system_stm32f4xx.h"

#include "lcd4.h"

#if !defined(__SOFT_FP__) && defined(__ARM_FP)
  #warning "FPU is not initialized, but the project is compiling for an FPU. Please initialize the FPU before use."
#endif

int main(void)
{
	SystemInit();
	LcdInit();
	LcdPuts(LCD_LINE1, "JYOTI");
	LcdPuts(LCD_LINE2, "GAYATRI");
	while(1)
	{
		LcdWrite(LCD_CMD,LCD_DISP_SHIFT);
		DelayMs(500);
	}
	return 0;
}

