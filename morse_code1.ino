const int Pin1 = 2; // for button
const int Pin2 = LED_BUILTIN; // for LED 
bool Blinking = false;

const int .Duration = 200; 
const int _Duration = 3 * .Duration; 

void setup() {
  pinMode(Pin1, INPUT);
  pinMode(Pin2, OUTPUT);
}

void loop() {
  if (digitalRead(Pin1) == HIGH) {
    while (digitalRead(Pin1) == HIGH) {
      
    }
    
    if (!Blinking) {
      blinkName("hemaksh"); 
      Blinking = true;
    } else {
      Blinking = false;
      digitalWrite(Pin2, LOW); 
      delay(1000); 
    }
  }
}

void blinkName(const char *name) {
  
  for (int i = 0; name[i] != '\0'; i++) {
    if (name[i] == ' ') {
      delay(7 * .Duration); 
    } else {
      // Led is blinked on the pattern of the morse code
    }
  }
}
