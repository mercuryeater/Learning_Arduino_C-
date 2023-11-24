/* 21/11/2023
  SerialPrintV2
  The purpose is print Hello World to Serial
*/

void setup() {
  // put your setup code here, to run once:
  // We start the serial Monitor at 9600bps bits per second:
  // meaning 1200 characters per second, a letter is 8 bits
  // This start should match the speed in the serial monitor
  Serial.begin(9600);

  // We send the hello world when it starts
  Serial.println("Hello World")

}

void loop() {
  // put your main code here, to run repeatedly:

  Serial.println("Hello World!");
  delay(5000);

}
