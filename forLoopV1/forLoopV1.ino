/*22/11/2023

  forLoopV1

  The purpose, to learn to use the "for loop" 

*/

int q;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  Serial.println("forLoopV1...");
  Serial.println(" ");
}

void loop() {
  // put your main code here, to run repeatedly:

  for (q=0; q <= 10; q++) {
    Serial.print("Val of q: ");
    Serial.println(q);
    delay(1000);
  }
}
