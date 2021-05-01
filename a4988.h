#ifndef A4988_H
#define A4988_H

#include "hardware/gpio.h"

#define pinEnable 21    // Active on gpio pin 5 motor X "Pin 29  Gpio 5" RPI2
#define pinstep   22      // pin de Pas   Motor X
#define pinDir    23    // Pin direction Motor X

class a4988
{
public:
    a4988();
  void init(); // test
  void PasX(int pas,int direction);


bool stopX1 = 0;
bool stopX2  = 0;


};

#endif // A4988_H
