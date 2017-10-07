/*
  Blink - Modificado
  Turns on an LED on for one second, then off for one second, repeatedly.
 
  This example code is in the public domain.
 */
 
// Pin 13 has an LED connected on most Arduino boards.
// give it a name:
int led = 13;

// the setup routine runs once when you press reset:
void setup() {                
  // initialize the digital pin as an output.
  Serial.begin(9600);
  pinMode(led, OUTPUT);     
}

// the loop routine runs over and over again forever:
void loop() {
  int i = 1;
  if(i == 1)
  {
    digitalWrite(led, HIGH);   // turn the LED on (HIGH is the voltage level)
    Serial.println("Led Aceso");
    delay(1000);               // wait for a second
    i = 0;
  }
  
  if(i == 0)
  {
    digitalWrite(led, LOW);    // turn the LED off by making the voltage LOW
    Serial.println("Led Apagado");
    delay(1000);               // wait for a second
    i = 0;
  }
 
}
