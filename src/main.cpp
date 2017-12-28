#include "mbed.h"

DigitalOut myled(LED1); // Onboard LED
 
 void step(){
     myled = !(myled);
}
 
int main() {
    Ticker t;
    t.attach(&step, 0.1);
    while(1) {
        wait(1);
    }
}
