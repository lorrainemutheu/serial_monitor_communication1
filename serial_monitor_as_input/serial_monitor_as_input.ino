int i = 0;

void setup()
{
  Serial.begin(9600);

  pinMode(13, OUTPUT);
}

void loop()
{
  i = (Serial.read() - 48);
  if (i == 1) {
    digitalWrite(13, HIGH);
  }
  if (i == 0) {
    digitalWrite(13, LOW);
  }
  delay(10); // Delay a little bit to improve simulation performance
}