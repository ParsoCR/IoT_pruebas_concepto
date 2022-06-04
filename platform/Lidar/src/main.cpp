#include <Arduino.h>

#include <Wire.h>

void setup() {
  Wire.begin();        // join i2c bus (address optional for master)
  Serial.begin(9600);  // start serial for output
}

void loop() {
  Wire.requestFrom(0xC0, 1);    // request 6 bytes from peripheral device #8

  while (Wire.available()) { // peripheral may send less than requested
    char c = Wire.read(); // receive a byte as character
    Serial.println(c,HEX);         // print the character
  }
  
  Serial.println("....");
  delay(500);

}