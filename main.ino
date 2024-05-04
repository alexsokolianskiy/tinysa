void setup() {
  Serial.begin(9600);
}

void loop() {
  Serial.print("start");
  Serial.write('\r');
  delay(5000);
  Serial.print("pause");
  Serial.write('\r');
  delay(5000);
}
