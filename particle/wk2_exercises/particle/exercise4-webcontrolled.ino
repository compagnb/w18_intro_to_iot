// ID 3f0023000947353138383138
// access token 3f0e95aca011b0cdcc821fb34e5a5233bade3298


int ledPin = D7;

boolean blinking = false;

void setup() {
    pinMode(ledPin, OUTPUT);
    Spark.function("led", ledSwitcher);
}

void loop() {
    if (blinking) {
        digitalWrite(ledPin, HIGH);
        delay(200);
        digitalWrite(ledPin, LOW);
        delay(200);
    }
}

int ledSwitcher(String command) {
    if (command.equalsIgnoreCase("on")) {
        blinking = true;
        return 1;
    }
    else if (command.equalsIgnoreCase("off")) {
        blinking = false;
        return 1;
    }
    return -1;
}

// To test with curl
// curl https://api.spark.io/v1/devices/3f0023000947353138383138/led -d access_token=3f0e95aca011b0cdcc821fb34e5a5233bade3298 -d params=on