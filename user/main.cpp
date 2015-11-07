/*
file   : *.cpp
author : shentq
version: V1.0
date   : 2015/7/5

Copyright 2015 shentq. All Rights Reserved.
*/

//STM32 RUN IN eBox
#include "ebox.h"
#include "led_display.h"

LED_DISPLAY led(&PA6,&PA4,&PA5);

void setup()
{
	ebox_init();
	led.begin(100);
	PA10.mode(INPUT_PD);




}
int main(void)
{
	setup();
	
	while(1)
	{	

		if(PA10.read())
			led.set(1);
		else
			led.set(3);

		led.loop();
//		delay_ms(1);

	}


}




