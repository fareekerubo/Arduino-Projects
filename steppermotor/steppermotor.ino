// defines pins numbers
const int stepPin = 8; 
const int dirPin = 10; 
const int enPin = 12;
void setup() {
  
  // Sets the two pins as Outputs
  pinMode(stepPin,OUTPUT); 
  pinMode(dirPin,OUTPUT);

  pinMode(enPin,OUTPUT);
  digitalWrite(enPin,LOW);
  
}
void loop() {
  
  digitalWrite(dirPin,LOW); // Enables the motor to move in a particular direction
  // Makes 200 pulses for making one full cycle rotation
  for(int x = 0; x < 8000; x++) {
    digitalWrite(stepPin,LOW); 
    delayMicroseconds(500); 
    digitalWrite(stepPin,HIGH); 
    delayMicroseconds(500); 
  }
  delay(1000); // One second delay

  digitalWrite(dirPin,HIGH); //Changes the rotations direction
  // Makes 400 pulses for making two full cycle rotation
  for(int x = 0; x < 8000; x++) {
    digitalWrite(stepPin,LOW);
    delayMicroseconds(500);
    digitalWrite(stepPin,HIGH);
    delayMicroseconds(500);
  }
  delay(1000);
 int x =0;
}
