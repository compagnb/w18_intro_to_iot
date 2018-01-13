

void setup() {
    RGB.control(true);
}

void loop() {
    // flash S
    flash(200, 200);
    flash(200, 200);
    flash(200, 200);
    // flash O
    flash(600, 200);
    flash(600, 200);
    flash(600, 200);
    // flash S
    flash(200, 200);
    flash(200, 200);
    flash(200, 200);
    
    delay(2000);

}

void flash(int duration, int gap){
    RGB.color(255, 255, 255);
    delay(duration);
    RGB.color(0,0,0);
    delay(gap);
    
}