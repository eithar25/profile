int sensorPin = A0;
int sensorReading;
int sensorOut;
int sensorMax = 505;
int sensorMin = 60;
unsigned long breathStartTime = 0;
unsigned long breathEndTime = 0;
unsigned long breathDuration = 0;
int breathCount = 0;

void setup() {
  Serial.begin(9600);
}

void loop() {
  sensorReading = analogRead(sensorPin);
  sensorOut = map(sensorReading, sensorMax, sensorMin, 0, 127);

  Serial.print(sensorOut);
  Serial.print("-");

  // Check for breath cycle
  if (sensorOut > 80) { // Adjust the threshold based on your sensor and environment
    if (breathStartTime == 0) {
      breathStartTime = millis();
    }
  } else {
    if (breathStartTime != 0) {
      breathEndTime = millis();
      breathDuration += breathEndTime - breathStartTime;
      breathStartTime = 0;
      breathCount++;
    }
  }

  // Calculate breath rate per minute
  if (breathCount > 0 && millis() % 60000 == 0) { // Update every minute
    float breathRate = (float)breathCount / ((float)breathDuration / 60000.0);
    Serial.print("Breaths per minute: ");
    Serial.println(breathRate);
    breathCount = 0;
    breathDuration = 0;
  }

  Serial.println();
  delay(5);
}