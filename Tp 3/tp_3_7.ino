#include <LiquidCrystal.h>
#define rojo 11
#define trigPin  13
#define echoPin  12
long duration, cm;
LiquidCrystal lcd(10, 9, 5, 4, 3, 2); 

void setup() {
  Serial.begin (9600);
  lcd.begin(16, 2);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);

}
 
void loop()
{
  //lcd.print("buenas tardes");
  digitalWrite(trigPin, LOW);
  delayMicroseconds(5);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
 
  duration = pulseIn(echoPin, HIGH);
 
  cm= duration*0.034/2;
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Distance: ");
  lcd.print(cm);
  lcd.println(" cm");
  delay(500);
    if(cm <= 5)
  {
     digitalWrite(rojo, HIGH);
      lcd.setCursor(0, 1);
      lcd.print("Muy cerca");

   }
    else if(cm > 5 && cm <= 10)
  {
      digitalWrite(rojo, LOW);
      lcd.setCursor(0, 1);
      lcd.print("cerca");


   }
    else if(cm > 10 && cm <= 20)
  {
      digitalWrite(rojo, LOW);
      lcd.setCursor(0, 1);
      lcd.print("proximo");
 

   }
    else
  {
     digitalWrite(rojo, LOW);
     lcd.setCursor(0, 1);
     lcd.print("");

   }
  delay(500);
	
}