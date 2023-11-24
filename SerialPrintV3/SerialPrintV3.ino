/* 21/11/2023
  SerialPrintV3
  The purpose is to use function Serial.print
  This does not put a carriage return at the en of the line
*/

void setup() {
  // put your setup code here, to run once:
  // We start the serial Monitor at 9600bps bits per second:
  // meaning 1200 characters per second, a letter is 8 bits
  // This start should match the speed in the serial monitor
  Serial.begin(115200);

  // Send script name
  Serial.println("SerialPrintV3...");

  // This will print a blank line
  Serial.println(" ");

  // Now Serial.print NOT Serial.println:
  Serial.print("First line of text");
  Serial.print("Second line of text");
}

void loop() {
  // put your main code here, to run repeatedly:
}
