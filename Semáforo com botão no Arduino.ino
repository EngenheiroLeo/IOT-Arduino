// C++ code
//
int A = 0;

void setup()
{
  pinMode(10, INPUT);
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
}

void loop()
{
  if (digitalRead(10) >= HIGH) {
    digitalWrite(13, HIGH);
    delay(500); // Wait for 500 millisecond(s)
    digitalWrite(12, HIGH);
    delay(500); // Wait for 500 millisecond(s)
    digitalWrite(11, HIGH);
    delay(1000); // Wait for 1000 millisecond(s)
  }
  if (digitalRead(10) <= LOW) {
    digitalWrite(13, LOW);
    digitalWrite(12, LOW);
    digitalWrite(11, LOW);
  }
}