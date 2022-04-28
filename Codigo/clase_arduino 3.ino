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
  
  selectColor(colores[random(0,6)]);
  delay(1000);
  lowColor(colores[random(0,6)]);
}
void setup() {
  Serial.begin(9600);
  pinMode(pinRojo, OUTPUT);
  pinMode(pinVerde, OUTPUT);
  pinMode(pinAzul, OUTPUT);
}

void loop() 
{
  String colores[7];
  colores[0] = "red";
  colores[1] = "blue";
  colores[2] = "green";
  colores[3] = "purple";
  colores[4] = "light blue";
  colores[5] = "yellow";
  colores[6] = "white";

  seleccionarTodosLosColores(colores);
  delay(2000);
  seleccionarTodosLosColoresRandom(colores);
  
  
}
