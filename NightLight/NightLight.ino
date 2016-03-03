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

  //initialize digital pin 13 as output.
  pinMode(13, OUTPUT);
  
}

// the loop function runs over and over again forever
void loop() {

  int lightValue = analogRead(A0);

  if(lightValue < 300){

    digitalWrite(13, HIGH);
    
  }else{

    digitalWrite(13, LOW);
    
  }

}
