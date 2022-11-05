
#define LED 5

void setup() {
  // Initiate Serial communication
  Serial.begin(115200);
  // Set pin mode
  pinMode(LED, OUTPUT);

}

void loop() {
  delay(1000);
  digitalWrite(LED, HIGH);
  Serial.print("LED on\n");
  delay(1000);
  digitalWrite(LED, LOW);
  Serial.print("LED off\n");
  
}
