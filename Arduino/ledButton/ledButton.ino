
int pushButton = 0;


// the setup routine runs once when you press reset:
void setup() {
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
  // make the pushbutton's pin an input:
  pinMode(pushButton, INPUT);
  pinMode(LED_BUILTIN, OUTPUT);
 
}

// the loop routine runs over and over again forever:
void loop() {
  int buttonState = digitalRead(pushButton);  //buttonState means digitalRead(pushButton)
  Serial.println(buttonState);                //printSerial of buttonState (digitalRead(pushButton))
  delay(1);                                   // delay in between reads for stability
  if(buttonState == HIGH) {                   //if buttonState is HIGH then...
  digitalWrite(LED_BUILTIN, HIGH);            //LED lights up
} else {                                      //else....
  digitalWrite(LED_BUILTIN, LOW);             //not
}
}

