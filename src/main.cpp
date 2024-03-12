#include <Arduino.h>
#include <Wire.h>

#define I2C_ADDRESS_TEENSY 0x00 // TBD

enum Command
{
  IGNITE,
  ARM,
  //...,
};

void receiveEvent(int numBytes)
{
  while (Wire.available())
  {
    int command = Wire.read();
    switch (command)
    {
    case IGNITE:
      // Task 1: Execute command 1
      // TODO: Implement task 1
      break;
    case ARM:
      // Task 2: Execute command 2
      // TODO: Implement task 2
      break;
      //...
    default:
      // Invalid command received
      break;
    }
  }
}

void setup()
{
  Wire.begin(I2C_ADDRESS_TEENSY);
  Wire.onReceive(receiveEvent);
}

void loop()
{
}