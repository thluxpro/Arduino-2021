#include <Servo.h>
#define potencia A0
Servo servo;
int valorPotenciometro = 0;
int giro = 0;

void setup()
{
  Serial.begin(9600);
  servo.attach(10);
  pinMode(potencia, INPUT); 

}

void loop()
{
  valorPotenciometro = analogRead(potencia);
  giro = map(valorPotenciometro, 0, 1023, 0, 180);
  servo.write(giro);
}