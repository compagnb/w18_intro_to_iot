// GLOBAL VARIABLES

// Here we will define the pins we are going to call pinMode on
int led0 = D0;
int switchPin = D3; 

void setup(){
    // initialize the pins as output
    pinMode(led0, OUTPUT);
    pinMode(switchPin, INPUT_PULLUP);
}

void loop(){
    if (digitalRead(switchPin) == LOW) {
        digitalWrite(led0, HIGH);
    }
}