

#include <PicoGamepad.h>

PicoGamepad gamepad;

// 16 bit integer for holding input values
int val;

void setup() {  
  Serial.begin(115200);
  
  pinMode(LED_BUILTIN, OUTPUT);

  // front on pin 26
  pinMode(15, INPUT);
   // back on pin
  pinMode(16, INPUT);

}

void loop() {

  // Get input value from Pico analog pin
  val = analogRead(15);
  val = analogRead(16)

  // Set button by reading button on digital pin 28 ,
  gamepad.SetButton(0, !digitalRea(15));
  gamepad.SetButton(1, !digitalRead(16));


  gamepad.send_update();

  // Flash the LED just for fun
  digitalWrite(LED_BUILTIN, !digitalRead(LED_BUILTIN)); 
  delay(100);
}
