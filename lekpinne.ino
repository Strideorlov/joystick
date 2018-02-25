
#include <Joystick.h>

// Variable

int gas = A0;
int gasValue = 0;
int gasValuebyte = 0;
int knapp = 13;



// init joystick libary
void setup() {
  Joystick.begin();
 pinMode(knapp, INPUT); 
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

 int buttonState = digitalRead(knapp);
  Serial.println(buttonState);
  delay(1);
}
