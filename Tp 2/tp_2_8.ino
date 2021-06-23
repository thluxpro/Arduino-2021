#define rojo 13
#define sensor 2
int n = 1;
void setup() 
{   
  Serial.begin(9600);
  pinMode(rojo, OUTPUT);
  pinMode(sensor, INPUT);
} 

void loop() 
{ 
  if (digitalRead(sensor)==HIGH){
    if(n <=10){
    	n++;
      	digitalWrite(rojo,HIGH);
      	delay(500);
    	}
      else{
      n=1;       
      delay(500);
    }
    digitalWrite(rojo,LOW);
    Serial.println(n);
    delay(500);
    }
  }
