
#define rojo 11
#define amarillo 10
#define verde 9
#define LDR A5
void setup() 
{   
  Serial.begin(9600);
  pinMode(rojo, OUTPUT);
  pinMode(A5, INPUT);
} 

void loop() 
{ 
  int luz = analogRead(LDR);
  Serial.println(luz);
  rango(luz);	
 }
void rango(int luz)
  {  
  if(luz < 300)
  {
    Serial.println("Iluminacion 1");
    analogWrite(rojo, 250);
    analogWrite(amarillo, 0);
    analogWrite(verde, 0);
    delay(750);
  }
  if(luz > 300 && luz < 400)
  {
    Serial.println("Iluminacion 2");
    analogWrite(rojo, 0);
    analogWrite(amarillo, 250);
    analogWrite(verde, 0);
    delay(750);
  }
  if(luz > 400 && luz < 500)
  {
    Serial.println("Iluminacion 3");
    analogWrite(rojo, 0);
    analogWrite(amarillo, 0);
    analogWrite(verde, 250);
    delay(750);
  }
  if(luz > 500 && luz < 600);
  {
    Serial.println("Iluminacion 4");
    analogWrite(rojo, 0);
    analogWrite(amarillo, 0);
    analogWrite(verde, 0);
    delay(750);
  }
  if(luz > 600)
  {
    Serial.println("Iluminacion 5");
    analogWrite(rojo, 0);
    analogWrite(amarillo, 0);
    analogWrite(verde, 0);
    delay(750);
  }
}