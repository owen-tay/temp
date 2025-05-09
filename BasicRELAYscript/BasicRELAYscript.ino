int LIGHTRELAY = 4;

void setup() {
  pinMode(LIGHTRELAY, OUTPUT);
  digitalWrite(LIGHTRELAY, HIGH);  
}

void loop() {
  digitalWrite(LIGHTRELAY, LOW);   
  delay(500);
  digitalWrite(LIGHTRELAY, HIGH); 
  delay(500);
}
