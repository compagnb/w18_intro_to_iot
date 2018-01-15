// Challenge 2: Morse code flasher application with button
// Barbara Compagnoni
// Internet Of Things
// Winter 2018

// Global Variables
int ledPin = D0;
int button = D3;

String message = "We are using morse code";

int dot = 200;
int dash = dot * 3;


String letters[] = {
    ".-", // a
    "-...", // b
    "-.-.", // c
    "-..", // d
    ".", // e
    "..-.", // f
    "--.", // g
    "....", // h
    "..", // i
    ".---", // j
    "-.-", // k
    ".-..", // l
    "--", // m
    "-.", // n
    "---", // o
    ".--.", // p
    "--.-", // q
    ".-.", // r
    "...", // s
    "-", // t
    "..-", // u
    "...-", // v
    ".--", // w
    "-..-", // x 
    "-.--", // y
    "--.." //z
    
    // numbers if you want to get CRAZY!
    // ".----", // 1
    // "..---", // 2
    // "...--", // 3
    // "....-", // 4
    // ".....", // 5
    // "-....", // 6
    // "--...", // 7
    // "---..", // 8
    // "----.", // 9
    // "-----" // 10
    };

void setup(){
    pinMode(led0, OUTPUT);
    pinMode(button, INPUT_PULLUP);
}

void loop(){
    if (digitalRead(button) == LOW) {
        flashMessage(message);
    }
}

void flashMessage(String message){
    for (int i = 0; i < message.length(); i++){
        char letter = message.charAt(i);
        flashLetter(letter);
    }
}

void flashLetter(char letter){
    if (letter >= 'a' && letter <= 'z') {
        flashDotsAndDashes(letters[letter - 'a']);
    }
    else if (letter >= 'A' && letter <= 'Z') {
        flashDotsAndDashes(letters[letter - 'A']);
    }
    else if (letter == ' ') {
        delay(dot * 7); // gap between words
    }
}

void flashDotsAndDashes(String dotsAndDashes) {
    for (int i = 0; i < dotsAndDashes.length(); i++) {
        char dotOrDash = dotsAndDashes.charAt(i);
        if (dotOrDash == '.') {
            flash(dot);
        }
        else {
            flash(dash);
        }
        delay(dot); // gap between dots and dashes of a letter
    }
    delay(dash - dot); // gap between letters of a word
}

void flash(int duration) {
    digitalWrite(led0, HIGH);
    delay(duration);
    digitalWrite(led0, LOW);
}