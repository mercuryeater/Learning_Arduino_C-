/*22/11/2023

  forLoopV2

  The purpose, to see different versions of for loop code

*/

int q;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  Serial.println("forLoopV2...");
  Serial.println(" ");
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println("EXAMPLE 1:");
  for (q=0; q <= 10; q++) {
    Serial.print("Val of q: ");
    Serial.println(q);
    delay(500);
  }

  Serial.println("EXAMPLE 2:");
  for (q=30; q > 20; q--) {
    Serial.print("Val of q: ");
    Serial.println(q);
    delay(500);
  }

  Serial.println("EXAMPLE 3:");
  for (q=10; q > -10; q--) {
    Serial.print("Val of q: ");
    Serial.println(q);
    delay(500);
  }

  delay(1000);
}
