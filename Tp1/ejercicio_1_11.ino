#define verde  10
#define rojo  9
#define amarillo  8
void setup()
{
  Serial.begin(9600);

  pinMode(verde, OUTPUT);
  pinMode(rojo, OUTPUT);
  pinMode(amarillo, OUTPUT);
}

void loop(){ 
 
digitalWrite(verde, HIGH);
digitalWrite(rojo, LOW);
digitalWrite(amarillo, LOW);// Enciende el primer LED 
delay(2000); // Se mantiene 200 ms encendido
digitalWrite(verde, LOW);
digitalWrite(rojo, HIGH);
digitalWrite(amarillo, LOW); // Enciende el segundo LED 
delay(2000); // Se mantiene 200 ms encendido
digitalWrite(verde, LOW);
digitalWrite(rojo, LOW);
digitalWrite(amarillo, HIGH);; // Enciende el tercer LED 
delay(2000);  // Se mantiene 200 ms encendido
}  