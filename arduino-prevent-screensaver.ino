/*
  Send mouse events to simulate user interaction and prevent screen saver/screen lock.
  
  Hardware:
  - pushbuttons attached to D2

  Based on ButtonMouseControl example by Tom Igoe
  https://www.arduino.cc/en/Tutorial/BuiltInExamples/ButtonMouseControl

  This code is in the public domain.
*/

#include "Mouse.h"

// set pin numbers for the five buttons:
const int button = 2;

const int sleepTime = 3000;     // response delay of the mouse, in ms
int xmove = 2;

void setup() {
  // initialize the buttons' inputs:
  pinMode(button, INPUT);
  // initialize mouse control:
  Mouse.begin();
}

void loop() {
  // read the buttons:
  int bState = digitalRead(button);
  // TODO: enable/disable mouse movement and LED on button press

  Mouse.move(xmove, 0, 0);

  // a delay so the mouse doesn't move too fast:
  delay(sleepTime);

  xmove *= -1;
}
