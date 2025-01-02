const int flexPin = A1;  // Pin connected to the flex sensor
int sensorValue;         // Variable to store the sensor value
int Threshold_1 = 130;      // Threshold for "Hello"
int Threshold_2 = 150; // Threshold for "Good Morning"

void setup() {
  Serial.begin(9600);    // Start serial communication
  pinMode(flexPin, INPUT);
}

void loop() {
  sensorValue = analogRead(flexPin);  // Read the sensor value
  Serial.print("Sensor Value: ");
  Serial.println(sensorValue);

  if (sensorValue > Threshold_1) {
    Serial.println("DESIRED RESPONSE");
  
  } else {
    Serial.println("NO RESPONSE");
  }

  delay(500);  // Delay for stability
}