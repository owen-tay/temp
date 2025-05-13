int LIGHTRELAY = 4;
int PUMPRELAY = 5;

//test for now. Will creat 24 clock using hours mins etc
void setup() {
  pinMode(LIGHTRELAY, OUTPUT);
  digitalWrite(LIGHTRELAY, HIGH);  
}

void loop() {
  digitalWrite(LIGHTRELAY, LOW);   
  delay(500);
  digitalWrite(LIGHTRELAY, HIGH); 
  delay(500);
  digitalWrite(PUMPRELAY, LOW);   
  delay(500);
  digitalWrite(PUMPRELAY, HIGH); 
  delay(500);
}
