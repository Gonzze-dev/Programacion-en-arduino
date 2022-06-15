#define ledPinVerde 11
#define ledPinAmarillo 10
#define ledPinRojo 9

void setup()
{
  pinMode(ledPinVerde, OUTPUT);
  pinMode(ledPinAmarillo, OUTPUT);
  pinMode(ledPinRojo, OUTPUT);
}

void loop()
{
  digitalWrite(ledPinVerde, HIGH);
  delay(60000);
  digitalWrite(ledPinVerde, LOW);
  delay(500);
  
  digitalWrite(ledPinAmarillo, HIGH);
  delay(15000);
  digitalWrite(ledPinAmarillo, LOW);
  delay(500);
  
  digitalWrite(ledPinRojo, HIGH);
  delay(30000);
  digitalWrite(ledPinRojo, LOW);
}