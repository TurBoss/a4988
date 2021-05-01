#include "a4988.h"


a4988 joint;


int main()
{
    joint.init();
    
    while(1){
		
		joint.PosX(80000, 1);
		
		sleep_us(2000);
		
		joint.PosX(80000, 0);
		
		sleep_us(2000);
    }
}
