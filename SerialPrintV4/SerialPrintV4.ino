/* 21/11/2023
  SerialPrintV4
  The purpose is to display a variable for real
*/

int q;

void setup() {
  // put your setup code here, to run once:
  // We start the serial Monitor at 9600bps bits per second:
  // meaning 1200 characters per second, a letter is 8 bits
  // This start should match the speed in the serial monitor
  Serial.begin(115200);

  // Send script name
  Serial.println("SerialPrintV4...");

  // This will print a blank line
  Serial.println(" ");
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.print("Val q: ");
  Serial.println(q);
  q++;
  delay(1000);
}
