#define verde 10
#define azul 9
#define rojo 11
#define trigPin  13
#define echoPin  12
long duration, cm;
 
void setup() {
  Serial.begin (9600);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
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
    if(cm < 100)
  {
    analogWrite(verde, LOW);
    analogWrite(rojo, 50);
    analogWrite(azul, LOW);

  }
  if(cm > 100 && cm < 150)
  {
    analogWrite(verde,	LOW);
    analogWrite(rojo, 100);
    analogWrite(azul, LOW);
  }
  if(cm > 150 && cm < 250)
  {
    analogWrite(verde, LOW);
    analogWrite(rojo, 150);
    analogWrite(azul, LOW);
  }
    if(cm > 250)
  {
    analogWrite(verde, LOW);
    analogWrite(rojo, LOW);
    analogWrite(azul, LOW);
  }
}