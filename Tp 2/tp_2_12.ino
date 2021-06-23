#define sensor 8
#define rojo 10
#define azul 9
void setup()
{
  Serial.begin(9600);
  pinMode(rojo, OUTPUT);
  pinMode(azul, OUTPUT); 
  pinMode(sensor, INPUT);
}

void loop()
{
  int valor = digitalRead(sensor);
  if (valor == HIGH){
    //Serial.println("detectado");
  	digitalWrite(rojo, HIGH);
    digitalWrite(azul, LOW);
    delay(500);
  }
  else{
	digitalWrite(rojo, LOW);
    digitalWrite(azul, HIGH);
    delay(500);
  }
}