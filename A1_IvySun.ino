/*
Sample Code (Hello_NeoPixels) in Adafruit Library

Modified by Ivy Sun 3183268 in Feb. 2022
*/


#include <Adafruit_CircuitPlayground.h>

int Switch1;
int Switch2;
int Switch3;

void setup() {
  CircuitPlayground.begin();
  CircuitPlayground.setBrightness(255);
  Serial.begin(9600);
  pinMode(2, INPUT_PULLUP);
  pinMode(0, INPUT_PULLUP);
  pinMode(6, INPUT_PULLUP);
}

void loop() {

  Switch1 = digitalRead(2);
  Switch2 = digitalRead(0);
  Switch3 = digitalRead(6);

  if (Switch1 == 0) {

    CircuitPlayground.setPixelColor(0, 255,  38,  13);
    CircuitPlayground.setPixelColor(1, 255,   0,   0);
    CircuitPlayground.setPixelColor(2, 255,  38,  13);
    CircuitPlayground.setPixelColor(3, 255,   0,   0);
    CircuitPlayground.setPixelColor(4, 255,  38,  13);

    CircuitPlayground.setPixelColor(5, 255,   0,   0);
    CircuitPlayground.setPixelColor(6, 255,  38,  13);
    CircuitPlayground.setPixelColor(7, 255,   0,   0);
    CircuitPlayground.setPixelColor(8, 255,  38,  13);
    CircuitPlayground.setPixelColor(9, 255,   0,   0);

    delay(7000);

  } else if (Switch2 == 0) {
   
    CircuitPlayground.setPixelColor(0,   0,   0, 255);
    CircuitPlayground.setPixelColor(1,   0, 204, 255);
    CircuitPlayground.setPixelColor(2,   0,   0, 255);
    CircuitPlayground.setPixelColor(3,   0, 204, 255);
    CircuitPlayground.setPixelColor(4,   0,   0, 255);

    CircuitPlayground.setPixelColor(5,   0, 204, 255);
    CircuitPlayground.setPixelColor(6,   0,   0, 255);
    CircuitPlayground.setPixelColor(7,   0, 204, 255);
    CircuitPlayground.setPixelColor(8,   0,   0, 255);
    CircuitPlayground.setPixelColor(9,   0, 204, 255);

    delay(7000);

  } else if (Switch3 == 0) {
    
    CircuitPlayground.setPixelColor(0, 255,   0,   0);
    CircuitPlayground.setPixelColor(1, 255, 255,   0);
    CircuitPlayground.setPixelColor(2,   0, 255,   0);
    CircuitPlayground.setPixelColor(3,   0, 255, 255);
    CircuitPlayground.setPixelColor(4,   0,   0, 255);

    CircuitPlayground.setPixelColor(5, 255,   0,   0);
    CircuitPlayground.setPixelColor(6, 255, 255,   0);
    CircuitPlayground.setPixelColor(7,   0, 255,   0);
    CircuitPlayground.setPixelColor(8,   0, 255, 255);
    CircuitPlayground.setPixelColor(9,   0,   0, 255);

    delay(7000);

  } else {

    CircuitPlayground.setPixelColor(0, 255, 255, 255);
    CircuitPlayground.setPixelColor(1, 255, 255, 255);
    CircuitPlayground.setPixelColor(2, 255, 255, 255);
    CircuitPlayground.setPixelColor(3, 255, 255, 255);
    CircuitPlayground.setPixelColor(4, 255, 255, 255);

    CircuitPlayground.setPixelColor(5, 255, 255, 255);
    CircuitPlayground.setPixelColor(6, 255, 255, 255);
    CircuitPlayground.setPixelColor(7, 255, 255, 255);
    CircuitPlayground.setPixelColor(8, 255, 255, 255);
    CircuitPlayground.setPixelColor(9, 255, 255, 255);
  }
}
