#define verde 3 
#define azul 5
#define rojo 6
#define pulsador 7
int num;
int val = 0; 

void setup(){  
   pinMode(pulsador,INPUT); 
   pinMode(verde,OUTPUT); 
   pinMode(azul,OUTPUT);
   pinMode(rojo,OUTPUT);
}
void loop() {      
     val = digitalRead(pulsador); 
     if (val == HIGH){
       num = random(0,8);
       Serial.println(num);
       cambiar_color(num);
       delay(500);
      }
      else{
       digitalWrite(rojo, LOW);
       digitalWrite(verde, LOW);
       digitalWrite(azul, LOW); 
    }
}

void cambiar_color (int num){
  switch (num){
    
    case 1:{
            digitalWrite(rojo, HIGH);
            digitalWrite(verde, LOW);
            digitalWrite(azul, LOW);
            Serial.println("rojo");
            delay(500);
            break;
      }
    case 2:{
            digitalWrite(rojo,LOW);
            digitalWrite(verde,HIGH);
            digitalWrite(azul, LOW);
            Serial.println("VERDE");
            delay(500);
            break;
      }
    case 3:{
            digitalWrite(rojo,LOW);
            digitalWrite(verde,LOW);
            digitalWrite(azul, HIGH);
            Serial.println("azul");
            delay(500);
            break;
      }
    case 4:{
            digitalWrite(rojo,HIGH);
            digitalWrite(verde,HIGH);
            digitalWrite(azul,LOW);
            Serial.println("amarillo");
            delay(500);
            break;
      }
    case 5:{
        digitalWrite(rojo,HIGH);
        digitalWrite(verde,LOW);
        digitalWrite(azul,HIGH);
        Serial.println("VIOLETA");
        delay(500);
        break;
      }
    case 6:{
        digitalWrite(rojo,LOW);
        digitalWrite(verde,HIGH);
        digitalWrite(azul,HIGH);
        Serial.println("CELESTE");
        delay(500);
        break;
      }
    case 7:{
      digitalWrite(rojo,HIGH);
      digitalWrite(verde,HIGH);
      digitalWrite(azul,HIGH);
      Serial.println("BLANCO");
      delay(500);
      break;
    }  
  }
}