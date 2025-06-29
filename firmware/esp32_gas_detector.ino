#include <WiFi.h>
#include <BlynkSimpleEsp32.h>

#define MQ2_PIN 34
#define RED_LED 2
#define GREEN_LED 4
#define BUZZER 5

char auth[] = "YourAuthToken";
char ssid[] = "YourWiFiSSID";
char pass[] = "YourWiFiPassword";

int gasThreshold = 400;

void setup() {
  pinMode(MQ2_PIN, INPUT);
  pinMode(RED_LED, OUTPUT);
  pinMode(GREEN_LED, OUTPUT);
  pinMode(BUZZER, OUTPUT);
  
  Serial.begin(115200);
  Blynk.begin(auth, ssid, pass);
}

void loop() {
  Blynk.run();

  int gasValue = analogRead(MQ2_PIN);
  Serial.println(gasValue);

  if (gasValue > gasThreshold) {
    digitalWrite(RED_LED, HIGH);
    digitalWrite(GREEN_LED, LOW);
    digitalWrite(BUZZER, HIGH);
    Blynk.logEvent("gas_alert", "High gas level detected!");
  } else {
    digitalWrite(RED_LED, LOW);
    digitalWrite(BUZZER, LOW);
    digitalWrite(GREEN_LED, HIGH);
    delay(3000);
    digitalWrite(GREEN_LED, LOW);
  }

  delay(1000);
}

