#include <SoftwareSerial.h>

SoftwareSerial BT(10, 11); // RX | TX for HC-05
String voice;

int fan = 2;     // Fan connected to Relay 1
int light = 3;   // Light connected to Relay 2
int buzzer = 4;  // Buzzer connected to Relay 3

void setup() {
  Serial.begin(9600);
  BT.begin(9600);

  pinMode(fan, OUTPUT);
  pinMode(light, OUTPUT);
  pinMode(buzzer, OUTPUT);

  digitalWrite(fan, LOW);
  digitalWrite(light, LOW);
  digitalWrite(buzzer, LOW);

  Serial.println("Voice Controlled Home Automation Ready...");
}

void loop() {
  while (BT.available()) {
    delay(10);
    char c = BT.read();
    if (c == '#') break;  // End of command marker
    voice += c;
  }

  if (voice.length() > 0) {
    Serial.println("Command: " + voice);

    if (voice == "fan on") {
      digitalWrite(fan, HIGH);
      Serial.println("Fan ON");
    }
    else if (voice == "fan off") {
      digitalWrite(fan, LOW);
      Serial.println("Fan OFF");
    }
    else if (voice == "light on") {
      digitalWrite(light, HIGH);
      Serial.println("Light ON");
    }
    else if (voice == "light off") {
      digitalWrite(light, LOW);
      Serial.println("Light OFF");
    }
    else if (voice == "buzzer on") {
      digitalWrite(buzzer, HIGH);
      Serial.println("Buzzer ON");
    }
    else if (voice == "buzzer off") {
      digitalWrite(buzzer, LOW);
      Serial.println("Buzzer OFF");
    }

    voice = "";  // Clear after processing
  }
}
