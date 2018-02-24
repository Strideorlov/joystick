
//
//--------------------------------------------------------------------


#include <Joystick.h>

// Variable

int gas = A0;

int gasValue = 0;
int gasValuebyte = 0;



// init joystick libary
void setup() {
  Joystick.begin();
}

void loop() {
  
  // Gas
  gasValue = analogRead(gas);
  if (gasValue >= 1) {
  gasValuebyte = gasValue / 4 ;
   }
   else
   {
    gasValuebyte = 0 ;
   }
  Joystick.setThrottle(gasValuebyte);
  delay(1); 
}

 
