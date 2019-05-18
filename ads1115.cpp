// Include the wiringPi library, and the ads1115.h script (its included in the wiringPi library)
#include <wiringPi.h> 
#include <ads1115.h>
#include <iostream>

int main(void)
{
  // Settup:
  wiringPiSetup();
  // Listen on 0x48, 70 can be any number
  ads1115Setup(70, 0x48);


    for(;;)
    {
       // Read channel 0:
       int ch0 = analogRead(70+0);
       Std::cout << ch0 << std::endl;
    }
}
