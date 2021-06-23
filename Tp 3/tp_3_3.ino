#include <Servo.h>

Servo servo;
int randomNumber;
int i;
void setup()
{
  Serial.begin(9600);
  servo.attach(10);
}

void loop()
{
  i=0;
  while (i < 3) {
      randomNumber = random(1,180);
      servo.write(randomNumber);
      delay(2000);
      i=i+1;
   } 
  	Serial.print("posicion");
  	Serial.println(randomNumber);
    servo.write(0);
      delay(1000);
      servo.write(90);
      delay(1000);
      servo.write(180);
      delay(1000);

}