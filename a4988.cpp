#include "a4988.h"


a4988::a4988() {

}


void a4988::init() {
	stdio_init_all();


	gpio_init(pinEnable);
	gpio_init(pinstep);
	gpio_init(pinDir);

	gpio_set_dir(pinEnable, GPIO_OUT);
	gpio_set_dir(pinstep, GPIO_OUT);
	gpio_set_dir(pinDir, GPIO_OUT);

	gpio_put(pinEnable, 0);

	// gpio_set_outover(PINNAME, GPIO_OVERRIDE_INVERT);


}

void a4988::PosX(int pos, int direction) {
	if(direction == 1){
		gpio_put(pinDir, 1);
		int i = 0;
		for(i=0; i<pos; i++){
		
			if(stopX1 == 1){
				pos=0;
			}  //end stop
			
			gpio_put(pinstep, 1);
			sleep_us(10);
			gpio_put(pinstep, 0);
			sleep_us(10);
		}
	}

   if(direction == 0){
	   gpio_put(pinDir, 0);
		
		int i = 0;
		for(i=0; i<pos; i++){
			if(stopX2 == 1){
				pos=0;
			}  //end stop
			
			gpio_put(pinstep, 1);
			sleep_us(10);
			gpio_put(pinstep, 0);
			sleep_us(10);
		}
	}
}



