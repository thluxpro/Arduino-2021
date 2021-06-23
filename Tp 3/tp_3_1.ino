#include <Servo.h>

Servo servo;
long randomNumber;

void setup()
{
  Serial.begin(9600);
  servo.attach(10);
}

void loop()
{
  randomNumber = random(1,100);
    servo.write(randomNumber);
    delay(500);
}