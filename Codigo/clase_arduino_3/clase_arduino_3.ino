#define pinRojo 2
#define pinAzul 4
#define pinVerde 3

void lowColor(String color)
{
  if(color == "red")
  {
    digitalWrite(pinRojo, LOW);
  }
  else if(color == "blue")
  {
    digitalWrite(pinAzul, LOW);
  }
  else if(color == "green")
  {
    digitalWrite(pinVerde, LOW);
  }
  else if(color == "purple")
  {
    digitalWrite(pinRojo, LOW);
    digitalWrite(pinAzul, LOW);
  }
  else if(color == "light blue")
  {
    digitalWrite(pinAzul, LOW);
    digitalWrite(pinVerde, LOW);
  }
  else if(color == "yellow")
  {
    digitalWrite(pinRojo, LOW);
    digitalWrite(pinVerde, LOW);
  }
  else if(color == "white")
  {
    digitalWrite(pinRojo, LOW);
    digitalWrite(pinVerde, LOW);
    digitalWrite(pinAzul, LOW);
  }

}

void selectColor(String color)
{
  if(color == "red")
  {
    digitalWrite(pinRojo, HIGH);
  }
  else if(color == "blue")
  {
    digitalWrite(pinAzul, HIGH);
  }
  else if(color == "green")
  {
    digitalWrite(pinVerde, HIGH);
  }
  else if(color == "purple")
  {
    digitalWrite(pinRojo, HIGH);
    digitalWrite(pinAzul, HIGH);
  }
  else if(color == "light blue")
  {
    digitalWrite(pinAzul, HIGH);
    digitalWrite(pinVerde, HIGH);
  }
  else if(color == "yellow")
  {
    digitalWrite(pinRojo, HIGH);
    digitalWrite(pinVerde, HIGH);
  }
  else if(color == "white")
  {
    digitalWrite(pinRojo, HIGH);
    digitalWrite(pinVerde, HIGH);
    digitalWrite(pinAzul, HIGH);
  }

}

void seleccionarTodosLosColores(String colores[7])
{
  for(int i = 0; i < 7; i++)
  {
    selectColor(colores[i]);
    delay(1000);
    lowColor(colores[i]);
  } 
}

void seleccionarTodosLosColoresRandom(String colores[7])
{
  byte num_random = random(0,6);
  selectColor(colores[num_random]);
  delay(1000);
  lowColor(colores[num_random]);
}
void setup() {
  Serial.begin(9600);
  pinMode(pinRojo, OUTPUT);
  pinMode(pinVerde, OUTPUT);
  pinMode(pinAzul, OUTPUT);
}

void loop() 
{
  String colores[7] = {"red", "blue", "green", "pruple", "light blue", "yellow", "white"};

  seleccionarTodosLosColores(colores);
  delay(2000);
  seleccionarTodosLosColoresRandom(colores);
  
}
