#ifndef ULTRASONIC_SENSOR_H
#define ULTRASONIC_SENSOR_H

#include <Arduino.h>

class UltrasonicSensor {
  public:
    UltrasonicSensor(int trigPin, int echoPin);

    float getDistance();

  private:
    int _trigPin;
    int _echoPin;
};

#endif
