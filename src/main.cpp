#include "mbed.h"
#include "rtos.h"

DigitalOut myled(LED1); // Onboard LED
 
 void step(){
     myled = !(myled);
}
 
int main() {
    Ticker t;
    t.attach(&step, 0.100001);
    while(1) {
        wait(1);
    }
}
