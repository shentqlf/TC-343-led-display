#ifndef __LED_DISPLAY_H
#define __LED_DISPLAY_H
#include "ebox.h"
#include "74hc595.h"

#define ADDR_A0 PA0
#define ADDR_A1 PA1
#define ADDR_A2 PA2
#define ADDR_A3 PA3
#define ENABLE	PB12


class LED_DISPLAY :public _74hc595
{
	public:
		LED_DISPLAY(GPIO* p_ds,GPIO* p_sck,GPIO* p_rck):_74hc595(p_ds,p_sck,p_rck){};
		void begin(u16 p_light);
		void display(u8 enable);
		void loop();
		void set(u8	p_mode);//…Ë÷√œ‘ æƒ⁄»›
			

	private:
		u16 light;
		u8	mode;
		void select_h(u8 hang);
		void date_lie(u8 *date);

};

#endif
