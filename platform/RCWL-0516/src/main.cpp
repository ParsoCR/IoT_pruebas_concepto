#include <Arduino.h>

#define SENSOR_OUT 5

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(SENSOR_OUT, INPUT);

}

// the loop function runs over and over again forever
void loop() {

  if (digitalRead(SENSOR_OUT)){
    digitalWrite(LED_BUILTIN, HIGH);
  }
  else {
    digitalWrite(LED_BUILTIN, LOW);
  }
  delay(10);                       // wait for a second
}