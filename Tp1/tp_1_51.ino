#define verde 5
#define azul 6
#define rojo 9
#define pinSensorA 0
#define pinSensorB 1
#define pinSensorC 2
int valorPotenciometroA = 0;
int valorPotenciometroB = 0;
int valorPotenciometroC = 0;
int brilloLedA = 0;
int brilloLedB = 0;
int brilloLedC = 0;


void setup()
{
  Serial.begin(9600);
  pinMode(azul, OUTPUT);
  pinMode(verde, OUTPUT);
  pinMode(rojo, OUTPUT);
  pinMode(pinSensorA, INPUT);
  pinMode(pinSensorB, INPUT);
  pinMode(pinSensorC, INPUT);
}

void loop()
{ 
  valorPotenciometroA = analogRead(pinSensorA);
  valorPotenciometroB = analogRead(pinSensorB);
  valorPotenciometroC = analogRead(pinSensorC);
  brilloLedA = map(valorPotenciometroA, 0, 1023, 0, 255);
  brilloLedB = map(valorPotenciometroB, 0, 1023, 0, 255);
  brilloLedC = map(valorPotenciometroC, 0, 1023, 0, 255);
  analogWrite(verde, brilloLedA); 
  analogWrite(azul, brilloLedB);
  analogWrite(rojo, brilloLedC);

}