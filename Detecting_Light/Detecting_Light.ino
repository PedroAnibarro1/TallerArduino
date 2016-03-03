/****************************************************
 *                  Description                     *
 *    This sketch turn a LED and a buzzer on        *
 *    depending on the input light of a resistor.   *
 *                                                  *
 *    Pattern: Faster for more light                *
 *             Slower for less light                *
 ****************************************************/


/*********************VARIABLES*********************/
int lightInput = A0; //light input pin
int led = 8; // led output pin
int buzzer = 9; //buzzer output pin

int frequency = 0; //frequency of the buzzer
int light = 0; //light of the resistor
int timer = 0; //time of the tone and light

int minLight = 300; //minimum light to turn off led and buzzer

/*********************SETUP*********************/
void setup() {
  
  Serial.begin(9600); //Begin the serial connection for debugging with 9600 bits per second
  pinMode(lightInput, INPUT); //Set the lightInput pin to Input
  pinMode(led, OUTPUT); //Set the led pin to Output
  pinMode(buzzer, OUTPUT); //Set the buzzer pin to Output

}


/*********************MAIN PROGRAM*********************/
void loop() {
  
    light = analogRead(lightInput); //read the light intensity

    if(light > minLight){ //if the light is above the minimu light, execute the pattern
      
      frequency = map(light, 150, 1000, 300, 1500); //maps the light range to the frequency range
      timer = map(light, 150, 1000, 500, 5); //maps the light range to the time range
      
      tone(buzzer, frequency, timer); //Play a tone with the buzzer with the calculated frequency and duration
      
      digitalWrite(led, HIGH); //turn on the led
      delay(timer + 50); //waits for the time map depending of the light
      digitalWrite(led, LOW); //turn off the led
      delay(timer + 50); //wait the same duration to have a more pronounced sound
   
    }

}

/*********************END*********************/
