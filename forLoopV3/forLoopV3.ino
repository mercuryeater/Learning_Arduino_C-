/*22/11/2023

  forLoopV3

  The purpose, to nest for loops

*/

int q;
int w;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  Serial.println("forLoopV3...");
  Serial.println(" ");
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println("NESTED LOOP:");
  for (q = 0; q <= 10; q++) {
    for (w = 10; w > -1; w--) {
      Serial.print("Val of q: ");
      Serial.print(q);
      Serial.print("  Val of w: ");
      Serial.println(w);
      delay(50);
    }
  }
  // Serial.print("Val of q: ");
  // Serial.println(q);


  delay(1000);
}
