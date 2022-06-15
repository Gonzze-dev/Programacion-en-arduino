#define pinGas A1
#define pinRojo 10
#define pinAzul 9
#define pinVerde 8



void setup()
{
  	Serial.begin(9600);
    pinMode(pinGas, OUTPUT);
    pinMode(pinRojo, OUTPUT);
    pinMode(pinAzul, OUTPUT);
    pinMode(pinVerde, OUTPUT);
}

void loop()
{
    int cantGas = analogRead(pinGas);
    int color = map(cantGas,0,22,0,255);
	Serial.println(color);
    if(cantGas > 5)
    {
        analogWrite(pinRojo, color);
        analogWrite(pinAzul, round(cantGas/3));
        analogWrite(pinVerde, 0);
    }
  	else
    {
     	analogWrite(pinRojo, 243);
        analogWrite(pinAzul, 243);
        analogWrite(pinVerde, 243);
    }

  
}