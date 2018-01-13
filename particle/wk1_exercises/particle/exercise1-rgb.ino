
// this is the set up function... where we set things up! becareful... it only runs once!
void setup() {
    RGB.control(true);
}

// this is the loop, just like the name says it will countinuously loop til we tell it to end!
void loop() {
    RGB.color(255, 0, 0);
    delay(2000);
    RGB.color(0, 255, 0);    
    delay(2000);
    RGB.color(0, 0, 255);
    delay(2000);
}