/*
  Analog input

  See input of photoresistor
 */


// the setup function runs once when you press reset or power the board
void setup() {

  //Start Serial monitor
  Serial.begin(9600);
  
  // initialize analog pin A0 as an input.
  pinMode(A0, INPUT);
  
}

// the loop function runs over and over again forever
void loop() {

  //Print photoresistor value
  Serial.println(analogRead(A0));

}
