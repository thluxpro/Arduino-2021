long x;
#define led_verde 6 
#define led_amarillo 5
#define led_rojo 4


void setup() {
   Serial.begin(9600); 
   randomSeed(analogRead(0));
   pinMode(led_verde,OUTPUT); 
   pinMode(led_amarillo,OUTPUT);
   pinMode(led_rojo,OUTPUT);
}

void loop() {
  x  = random(0, 11);
  if (x ==1 || x ==3 || x ==7) {
         digitalWrite(led_rojo,HIGH);
  		 delay(2000);
  		 digitalWrite(led_rojo,LOW);
  		 delay(2000);
         }
         else  {if (x ==0 || x ==2 || x ==8) {
            digitalWrite(led_verde,HIGH);
  			delay(2000);
  			digitalWrite(led_verde,LOW);
  			delay(2000);
              }
                else  {if (x ==4 || x ==5 || x ==9) {
            		digitalWrite(led_amarillo,HIGH);
  					delay(2000);
  					digitalWrite(led_amarillo,LOW);
  					delay(2000);
                } else {
                  digitalWrite(led_rojo,HIGH);
                  digitalWrite(led_verde,HIGH);
				  digitalWrite(led_amarillo,HIGH);
                  delay(2000);
                  digitalWrite(led_rojo,LOW);
                  digitalWrite(led_verde,LOW);
				  digitalWrite(led_amarillo,LOW);
  				  delay(2000);
                }
              }
            }
}