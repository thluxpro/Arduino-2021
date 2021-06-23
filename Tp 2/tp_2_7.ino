void setup() {
    Serial.begin(9600);
    pinMode(A0, INPUT);
    pinMode(9, OUTPUT);
    pinMode(6, OUTPUT);
}

void loop() {
    int sensor = analogRead(A0);
    Serial.print("Valor del sensor: ");
    Serial.println(sensor);
    int resistencia = map(sensor, 500, 1023, 0, 255);   
    intensidad(resistencia); 
    Serial.print("Valor de resistencia: ");
    Serial.println(resistencia);
     
}

void intensidad(int x){
    analogWrite(9, x);
    int aux = (255-x);
    analogWrite(6, aux);
    delay(500);
}