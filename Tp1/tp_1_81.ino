#define verde 9
#define azul 8
#define rojo 7 
#define LDR A5
int brilloLed = 0;
void setup() 
{   
  Serial.begin(9600);
  pinMode(azul, OUTPUT);
  pinMode(verde, OUTPUT);
  pinMode(rojo, OUTPUT);
} 

void loop() 
{ 
  int luz = analogRead(LDR);
  Serial.print("Luminosidad");
  Serial.println(luz);
  delay(1000);
   
  if(luz < 100)
  {
    digitalWrite(verde, LOW);
    digitalWrite(rojo, LOW);
    digitalWrite(azul, LOW);
  }
  if(luz > 100 && luz < 200)
  {
    digitalWrite(verde, HIGH);
    digitalWrite(rojo, LOW);
    digitalWrite(azul, LOW);
  }
  if(luz > 200 && luz < 300)
  {
    digitalWrite(verde, HIGH);
    digitalWrite(rojo, LOW);
    digitalWrite(azul, HIGH);
  }
  if(luz > 300 && luz < 400)
  {
    digitalWrite(verde, HIGH);
    digitalWrite(rojo, HIGH);
    digitalWrite(azul, LOW);
  }
  if(luz > 400 && luz < 500)
  {
    digitalWrite(verde, LOW);
    digitalWrite(rojo, HIGH);
    digitalWrite(azul, LOW);
  }
  if(luz > 500 && luz < 600)
  {
    digitalWrite(verde, LOW);
    digitalWrite(rojo, LOW);
    digitalWrite(azul, HIGH);
  }
  if(luz > 600)
  {
    digitalWrite(verde, HIGH);
    digitalWrite(rojo, HIGH);
    digitalWrite(azul, HIGH);
  }
}