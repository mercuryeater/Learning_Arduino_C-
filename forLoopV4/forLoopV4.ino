/*23/11/2023

  switchV1

  The purpose, to nest "for loops" and "if else"

*/

int q;
int w;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  Serial.println("switchV1...");
  Serial.println(" ");
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println("NESTED LOOP:");
  for (q = 0; q <= 10; q++) {

    if (q == 5) {
      for (w = 10; w > -1; w--) {
        Serial.print("Val of q: ");
        Serial.print(q);
        Serial.print("  Val of w: ");
        Serial.println(w);
        delay(100);
      }
    } else {
      Serial.print("Val of q: ");
      Serial.println(q);
      delay(500);
    }
  }

  delay(1000);
}
