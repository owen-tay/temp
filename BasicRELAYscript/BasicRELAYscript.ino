#define LIGHTRELAY 2



void setup() {
  // put your setup code here, to run once:
  pinMode(LIGHTRELAY, OUTPUT);

  digitalWrite(LIGHTRELAY, LOW)

}

void loop() {
  // put your main code here, to run repeatedly:
    digitalWrite(LIGHTRELAY, HIGH);
    delay(2000);
    digitalWrite(LIGHTRELAY, LOW);
    delay(2000)
}
