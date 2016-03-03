/*
  Blink
  Turns on an LED on when button is pressed.

  Most Arduinos have an on-board LED you can control. On the Uno and
  Leonardo, it is attached to digital pin 13. If you're unsure what
  pin the on-board LED is connected to on your Arduino model, check
  the documentation at http://www.arduino.cc

  This example code is in the public domain.

  modified 8 May 2014
  by Scott Fitzgerald
 */


// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin 13 as an output.
  pinMode(13, OUTPUT);
  // initialize digital pin 12 as an input.
  pinMode(13, INPUT);
}

// the loop function runs over and over again forever
void loop() {

  //If button is pressed, turn on led.
  if(digitalRead(12) == HIGH){

    digitalWrite(13, HIGH);   // turn the LED on (HIGH is the voltage level)
    
  }else{ // Turn off led.

    digitalWrite(13, LOW);    // turn the LED off by making the voltage LOW
  
  }

}
