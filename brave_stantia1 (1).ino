// C++ code
//
void setup()
{
  pinMode(13, OUTPUT);
  pinMode(1, OUTPUT);
}

void loop()
{
  digitalWrite(13, HIGH);

  digitalWrite(1, HIGH);
  delay(100); // Wait for 100 millisecond(s)
  digitalWrite(1, LOW);
  delay(100); // Wait for 100 millisecond(s)
}