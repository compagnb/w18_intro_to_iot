int dot = 200;
int dash = dot * 3;

void setup() {
    RGB.control(true);
}

void loop() {
    
    flashS();
    flashO();
    flashS();
    
    delay(2000);

}

void flash(int duration, int gap){
    RGB.color(255, 255, 255);
    delay(duration);
    RGB.color(0,0,0);
    delay(gap);
    
}

void flashS(){
    flash(dot, dot);
    flash(dot, dot);
    flash(dot, dot);
}

void flashO(){
    flash(dash, dot);
    flash(dash, dot);
    flash(dash, dot);
}