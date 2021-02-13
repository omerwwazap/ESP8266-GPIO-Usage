#define SensorPin A0  // used for Arduino and ESP8266
//#define SensorPin 4  // used for ESP32

void setup() { 
  Serial.begin(9600);
}

void loop() {
  float sensorValue = analogRead(SensorPin);
  Serial.println(sensorValue);
  delay(30000);
}  

//https://diyi0t.com/soil-moisture-sensor-tutorial-for-arduino-and-esp8266/
