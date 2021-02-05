# ESP8266-GPIO-Usage

ESP8266 - For Hobby Stuff and System Engineering Course - CTIS477

All Diagrams are made by me and are tested before i upload.

### Project Idea

This project is made to be used in our University course CTIS-477 - System Engineering.
For this course we have to make a small **Smart Home Automation System** as such i have decided to do the following;

Have a dashboard panel accessible by a web browser and will use 3 sensors:
Motion Sensor,
LDR Sensor,
Temperature and Humidity Combo Sensor.
So what will these sensors do?

- Motion Sensor
  - This sensor will send alerts to the dashboard and activate the LED connected to the circuit.

- LDR Sensor
  - When the room becomes dark, the sensor will send a query to the dashboard and activate a motor (i assume that this is connected to a curtain or something.) and activate the LED connected to the circuit.

- Temperature and Humidity Combo Sensor
  - The data will be simply displayed in the dashboard.

- LED
  - From the dashboard the user will be able to open and close the LED connected to the circuit.

- Motor
  - From the dashboard the user will be able to activate the motor. To a certain degree.

### Used Hardware

- NodeMCU V2 ESP8266 Development Board - CP2102
- Raspberry Pi 3B+
- DHT11 - Temperature and Humidity Sensor
- PIR Sensor - Motion Sensor
- LED
- Servo Motor
- 5mm LDR
- Breadboard

### Used Sources

- General Guide
  - [ESP8266 and Node-RED with MQTT](https://randomnerdtutorials.com/esp8266-and-node-red-with-mqtt/)
  - [ESP32 MQTT – Publish and Subscribe with Arduino IDE](https://randomnerdtutorials.com/esp32-mqtt-publish-subscribe-arduino-ide/)
  - [ESP8266 NodeMCU Projects, Tutorials and Guides with Arduino IDE](https://randomnerdtutorials.com/projects-esp8266/)
- Servo Motor
  - [ESP8266 Servo Motor Control](https://circuits4you.com/2019/01/12/esp8266-servo-motor-control/)
- LDR
  - [ESP8266 With LDR - 1](https://www.childs.be/blog/post/how-to-connect-a-photoresistor-or-light-dependant-resistor-to-an-esp8266-12e)
  - [ESP8266 With LDR - 2](https://www.instructables.com/NodeMCU-With-LDR/)
- DHT11/22 - Temperature and Humidity Sensor
  - [ESP8266 DHT11/DHT22 Temperature and Humidity Web Server with Arduino IDE](https://randomnerdtutorials.com/esp8266-dht11dht22-temperature-and-humidity-web-server-with-arduino-ide/)
  - [Interface DHT11 DHT22 w/ ESP8266 NodeMCU Using Web Server](https://lastminuteengineers.com/esp8266-dht11-dht22-web-server-tutorial/)3
  - [Interface DHT11 (Humidity Sensor) Using NodeMCU ESP8266](https://www.instructables.com/Interface-DHT11-Humidity-Sensor-Using-NodeMCU/)
- PIR Sensor - Motion Sensor
  - [Interface PIR Sensor With NodeMCU ESP8266](https://www.instructables.com/Interface-PIR-Sensor-With-NodeMCU/)
  - [MQTT motion detection With NodeMCU ESP8266](https://thenailz.github.io/mqtt-motion-detection/)
- Other
  - [omerwwazap/Raspberry-Pi-GPIO-Usage - Repo](https://github.com/omerwwazap/Raspberry-Pi-GPIO-Usage)  
- [Circuit Symbols](https://www.electronicshub.org/symbols/)
  - Hey i'm a software engineer and have not used these in ages.

### Resistance calculator

- [Resistance Calculation with picture - Turkish](http://ekinoks.cu.edu.tr/direnc/)
- [Tubitak](http://bilimteknik.tubitak.gov.tr/sites/default/files/gelisim/elektronik/resistor.html)

### ESP8266 Pin Layout

- [ESP8266 Pinout Reference](https://randomnerdtutorials.com/esp8266-pinout-reference-gpios/)