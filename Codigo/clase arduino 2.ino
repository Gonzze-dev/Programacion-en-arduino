#define trigPin  11
#define echoPin  12
#define lightPin 9

long duration, cm, inches;
 
void setup() {
  Serial.begin (9600);
  //Define inputs and outputs
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(lightPin, OUTPUT);
}
 
void loop()
{
  digitalWrite(trigPin, LOW);
  delayMicroseconds(5);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
 
  
  duration = pulseIn(echoPin, HIGH);
 
  // Calculating the distance
  cm= duration*0.034/2;
  Serial.print("Distance: ");
  Serial.print(cm);
  Serial.println(" cm");
   

  if(cm <= 20)
  {
    digitalWrite(lightPin, HIGH);
    delay(1000);
    digitalWrite(lightPin, LOW);
   
  }else if((cm > 20) && (cm < 40))
  {
    digitalWrite(lightPin, HIGH);
    delay(1000);
    digitalWrite(lightPin, LOW);
    delay(1000);
    digitalWrite(lightPin, HIGH);
    delay(1000);
    digitalWrite(lightPin, LOW);
  }
  
  delay(3000);
 
}
