

#include <Servo.h>
#define trigPin 12
#define echoPin 13

long duration, distance;
int pos;


 
Servo myservo;  
                
 

void setup() 
{ 
  myservo.attach(D5);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);

  Serial.begin(9600);
} 
 
void loop() { 
  digitalWrite(trigPin, LOW); 
  delayMicroseconds(10); 
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10); 
  digitalWrite(trigPin, LOW);
  duration = pulseIn(echoPin, HIGH);
  distance = (duration/2) / 29.1;
  Serial.print("D:"+String(distance));

  pos = constrain(distance, 5, 35);
  pos = map(pos, 5, 35, 0, 180);

  Serial.print("\t\tP:"+String(pos));
  Serial.print("\n");
  
  myservo.write(pos);

} 

