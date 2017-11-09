#define trigPin 12
#define echoPin 13
#define led 11


void setup() {
  Serial.begin (9600);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(led, OUTPUT);

}

void loop() {
 long duration, distance;
  digitalWrite(trigPin, LOW); 
  delayMicroseconds(0); 
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(0); 
  digitalWrite(trigPin, LOW);
  duration = pulseIn(echoPin, HIGH);
  distance = (duration/2) / 29.1;
  
 if (distance < 10) {  
    digitalWrite(led,HIGH); ; 
}
  else {
    digitalWrite(led,LOW);
  }
  
  delay(200);
} 
