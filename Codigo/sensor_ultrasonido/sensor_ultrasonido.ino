#define pin11 11
#define pinEco 10
#define pinLed 9

int duracionSensor;
int distancia;

void setup()
{
    pinMode(pin11, OUTPUT);
    pinMode(pinEco, OUTPUT);
    pinMode(pinLed, OUTPUT);
}

void loop()
{
    duracionSensor = pulseIn(pinEco, HIGH);
    delay(2000);
    duracionSensor = duracionSensor/58.2;

    if (distancia > 30)
    {
        digitalWrite(pinLed, HIGH);
    }
    else
    {
        digitalWrite(pinLed, LOW);
    }

    delay(2000);
}