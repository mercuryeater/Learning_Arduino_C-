/* 21/11/2023
  SerialPrintV2
  The purpose is to print numbers
*/

void setup() {
  // put your setup code here, to run once:
  // We start the serial Monitor at 9600bps bits per second:
  // meaning 1200 characters per second, a letter is 8 bits
  // This start should match the speed in the serial monitor
  Serial.begin(9600);

  // Send script name
  Serial.println("SerialPrintV2");

  // Send 123 to serial as a TEXT STRING
  Serial.println("123");

  // Send 123 as NUMBERS
  Serial.println(123);

  // Send a little of mathematics
  Serial.println(5+10);

  // Send 5+10 as text, it prints the text no math
  Serial.println("5+10");

}

void loop() {
  // put your main code here, to run repeatedly:
}
