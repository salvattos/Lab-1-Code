#include "button.h"

const uint8_t buttonPin = 14; //button A on the Romi

Button buttonA(buttonPin,10);

void setup() 
{
  Serial.begin(115200);
  
  buttonA.Init();
}

unsigned long buttonCount = 0;

void loop() 
{
  if(buttonA.CheckButtonPress()) 
  {
    Serial.println(buttonCount++);
  }
}
