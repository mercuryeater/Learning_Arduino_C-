/*23/11/2023

  NumericDataTypeV1

  The purpose, test numeric data types
*/

byte myByte;

int q;
int w;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  Serial.println("NumericDataTypeV1...");
  Serial.println(" ");
}

void loop() {
  // put your main code here, to run repeatedly:
  for (q = 0; q <= 300; q++) {
    Serial.print("q: ");
    Serial.print(q);
    Serial.print(" myByte: ");
    Serial.print(myByte);
    Serial.print(" BIN q: ");
    Serial.println(myByte, BIN);
    myByte++;
  }

  delay(1000);
}
