#ifndef A4988_H
#define A4988_H

#include <stdio.h>
#include "pico/stdlib.h"
#include "hardware/gpio.h"

#define pinEnable 15    // Active on gpio pin 5 motor X "Pin 29  Gpio 5" RPI2
#define pinstep   16    // pin de Pos   Motor X
#define pinDir    17    // Pin direction Motor X

class a4988 {
	public:
		a4988();
		void init(); // test
		void PosX(int pos,int direction);


		bool stopX1 = 0;
		bool stopX2  = 0;
};

#endif // A4988_H
