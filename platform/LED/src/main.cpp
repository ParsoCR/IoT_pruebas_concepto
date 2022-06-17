
#include <Arduino.h>

#define LED LED_BUILTIN

// the setup function runs once when you press reset or power the board
void setup() {
  Serial.begin(115200);
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED, OUTPUT);
  // pinMode(SENSOR_OUT, INPUT);

  Serial.println("Set up ready ...");
  delay(1000); 

}

// the loop function runs over and over again forever

int count = 0;
void loop() {

  if (!digitalRead(LED)){
    digitalWrite(LED, HIGH);
  }
  else {
    digitalWrite(LED, LOW);
  }
  count = count + 1;
  Serial.print("Count: ");
  Serial.println(count);
  delay(1000);                       // wait for a second
}