 
#define trigger 12 
#define echo 13


void setup()
{
  Serial.begin(9600); 
  pinMode(trigger, OUTPUT);
  pinMode(echo, INPUT);
 
}

void loop() // Arduino mainloop
{
 int distance=getdistance();
 
 
 Serial.write("distance:");
 Serial.print(distance) ;
 Serial.write("cm\n");
 
 delay(1000); //delay 1 second
}


// messure distance in cm
int getdistance(){ 
 
 long distance=0;
 long duration=0;
 digitalWrite(trigger, HIGH); //Trigger Impuls 10 us
 delayMicroseconds(10);
 digitalWrite(trigger, LOW); 
 delayMicroseconds(10);
 digitalWrite(trigger, LOW); 
 duration = pulseIn(echo, HIGH); // echo time-messurement

 
 duration = (duration/2); // divide time
 distance = duration / 29.1; // time to distance
 return(distance); 
}
