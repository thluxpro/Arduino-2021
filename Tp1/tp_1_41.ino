#define led_rojo 4
#define led_azul 5
#define led_amarillo 6
#define pinSensor 0
int valorPotenciometro = 0;
int brilloLed = 0;

void setup() {
   Serial.begin(9600); 
   pinMode(led_rojo,OUTPUT);
   pinMode(led_azul,OUTPUT);
   pinMode(led_amarillo,OUTPUT);
   pinMode(pinSensor, INPUT); 
}

void loop() {
  valorPotenciometro = analogRead(pinSensor);
  brilloLed = map(valorPotenciometro, 0, 1023, 0, 255);
  analogWrite(led_rojo, brilloLed);
  analogWrite(led_azul, brilloLed);
  analogWrite(led_amarillo, brilloLed);
  delay(150);
}