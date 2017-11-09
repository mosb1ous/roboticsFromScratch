#define trigPin 12
#define echoPin 13
#define led LED_BUILTIN

long duration, distance;

void setup() {
  Serial.begin (9600);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(led, OUTPUT);

}

void loop() {

  digitalWrite(trigPin, LOW); 
  delayMicroseconds(10); 
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10); 
  digitalWrite(trigPin, LOW);
  duration = pulseIn(echoPin, HIGH);
  distance = (duration/2) / 29.1;

  Serial.print("distance : " + String(distance) + "cm");
 
 if (distance < 10) {  
    digitalWrite(led,HIGH); 
    Serial.println("  =cool"); 
}
  else {
    digitalWrite(led,LOW);
    Serial.println("   =not cool");
 }
  
  delay(200);
} 

