#define verde 5
#define azul 6
#define rojo 9


void setup()
{
  Serial.begin(9600);
  
  pinMode(azul, OUTPUT);
  pinMode(verde, OUTPUT);
  pinMode(rojo, OUTPUT);
}

void loop()
{ 
  /*for(int i=0;i<=6;i++){
  cambiar_color(i);
  delay(2000);
  cambiar_color(7);
  delay(2000);  
  } */
}

void cambiar_color(int numero){
  switch(numero){
  case 0://rojo
    digitalWrite(azul, LOW);
  	digitalWrite(verde, LOW);
  	digitalWrite(rojo, HIGH);
    break;
  case 1:// verde
    digitalWrite(azul, LOW);
  	digitalWrite(verde, HIGH);
  	digitalWrite(rojo, LOW);
    break;
  case 2://azul
    digitalWrite(azul, HIGH);
  	digitalWrite(verde, LOW);
  	digitalWrite(rojo, LOW);
    break;
  case 3://amarillo
    digitalWrite(azul, LOW);
  	digitalWrite(verde, HIGH);
  	digitalWrite(rojo, HIGH);
    break;
  case 4://violeta
    digitalWrite(azul, HIGH);
  	digitalWrite(verde, LOW);
  	digitalWrite(rojo, HIGH);
    break;
  case 5://celeste
    digitalWrite(azul, HIGH);
  	digitalWrite(verde, HIGH);
  	digitalWrite(rojo, LOW);
    break;
  case 6://blanco
    digitalWrite(azul, HIGH);
  	digitalWrite(verde, HIGH);
  	digitalWrite(rojo, HIGH);
    break;
  }
}