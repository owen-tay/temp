const int LIGHTRELAY = 2;
const int PUMPRELAY  = 4;

// Time stuff
const unsigned long ONE_SECOND = 1000UL;
const unsigned long ONE_MINUTE = 60UL * ONE_SECOND;
const unsigned long ONE_HOUR   = 60UL * ONE_MINUTE;
const unsigned long ONE_DAY    = 24UL * ONE_HOUR;


const unsigned long LIGHTS_ON_DURATION = 8UL * ONE_HOUR;  

void setup() {
  pinMode(LIGHTRELAY, OUTPUT);
  pinMode(PUMPRELAY, OUTPUT);
  digitalWrite(PUMPRELAY, HIGH);
}

void loop() {
  unsigned long NOW = millis();
  unsigned long TIME = NOW % ONE_DAY;

  //Light
  bool LIGHTSON = (TIME < LIGHTS_ON_DURATION);
  
  if (LIGHTSON) {
    digitalWrite(LIGHTRELAY, HIGH);
  } else {
    digitalWrite(LIGHTRELAY, LOW);
  }

//pump

// digitalWrite(PUMPRELAY, HIGH);

/// 5 second delay because why not

  delay(5000);  
}
