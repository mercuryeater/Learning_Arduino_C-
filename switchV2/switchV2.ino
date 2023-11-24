/*23/11/2023

  switchV2

  The purpose, "switch" statement comparing multiple values in a single case

  The syntaxis is:

  lowestNumber ... higherNumber:
    CODE; 

*/

int q;
int w;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  Serial.println("switchV2...");
  Serial.println(" ");
}

void loop() {
  // put your main code here, to run repeatedly:
  for (q = 0; q <= 10; q++) {
    Serial.print("q: ");
    Serial.println(q);
    switch (q) {
      case 1:
        Serial.println("q is equal to 1");
        break;
      case 2:
        Serial.println("q == 2");
        break;
      case 5 ... 10:
        Serial.println("Val of q from 5 to 10");
        break;
      default:
        // is normal to do nothing when in default
        Serial.println("q IS NOT EQUAL to 1 or 2");
        break;
    }
    delay(1000);
  }

  delay(1000);
}
