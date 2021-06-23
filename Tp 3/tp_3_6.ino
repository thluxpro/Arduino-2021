

#define trigPin  13
#define echoPin  12
#define sonido 7
long duration, cm;
 
void setup() {
  Serial.begin (9600);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(sonido, OUTPUT);
}
 
void loop()
{
  digitalWrite(trigPin, LOW);
  delayMicroseconds(5);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
 
  duration = pulseIn(echoPin, HIGH);
 

  cm= duration*0.034/2;
  Serial.print("Distance: ");
  Serial.print(cm);
  Serial.println(" cm");
  
  delay(250);
    if(cm > 20 && cm < 30)
  {
    digitalWrite(sonido, HIGH);
     delay(250);
    digitalWrite(sonido, LOW);
   }
      if(cm > 30 && cm < 50)
  {
    digitalWrite(sonido, HIGH);
     delay(500);
    digitalWrite(sonido, LOW);
   }
      if(cm > 50 && cm < 100)
  {
    digitalWrite(sonido, HIGH);
     delay(1000);
    digitalWrite(sonido, LOW);
   }
      if(cm > 100 && cm < 150)
  {
    digitalWrite(sonido, HIGH);
     delay(1500);
    digitalWrite(sonido, LOW);
   }
  if(cm < 20 && cm > 150)
  {
    digitalWrite(sonido,LOW);

  }
}
