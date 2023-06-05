// Wiring / Arduino Code
// Code for sensing a switch status and writing the value to the serial port.
// Modificado por mí para uso con perilla

int perillaPin = A0;  // Switch connected to pin 4
int valorPerilla = -1;



void setup() {
  //pinMode(switchPin, INPUT);             // Set pin 0 as an input
  Serial.begin(9600);  // Start serial communication at 9600 bps
}

void loop() {

  valorPerilla = analogRead(perillaPin);

  Serial.write(valorPerilla);

  delay(100);  // Wait 100 milliseconds
}
