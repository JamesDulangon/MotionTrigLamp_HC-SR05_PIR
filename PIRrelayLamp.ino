/*********
  James Steven Dulangon
  Motion-triggered Lamp using HC-SR05 PIR sensor
*********/
#define pirSensor 2
#define relayIn 3

void setup() {
  pinMode(pirSensor, INPUT);
  pinMode(relayIn, OUTPUT);
  delay(60000); // 1 minute delay to stabilize sensor
}

void loop() {
  uint8_t sensorVal = digitalRead(pirSensor);
  
  if(sensorVal) digitalWrite(relayIn, LOW); // logic LOW will activate the relay
  else digitalWrite(relayIn, HIGH);

}
