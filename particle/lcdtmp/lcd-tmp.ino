// This #include statement was automatically added by the Particle IDE.
#include <LiquidCrystal.h>

// This #include statement was automatically added by the Particle IDE.
#include "OneWire.h"

// This #include statement was automatically added by the Particle IDE.
#include "spark-dallas-temperature.h"

OneWire oneWire(A1);
LiquidCrystal lcd(D0, D1, D2, D3, D4, D5);

DallasTemperature ds(&oneWire);
double tempF;
void setup()
{
    lcd.begin(16, 2);
    lcd.print("Temperature");
    lcd.setCursor(0,1);
    lcd.print("Sensing");
    ds.begin();
    Particle.variable("Temp",tempF);
}
void loop()
{
    //read the sensor value
    ds.requestTemperatures();
    
    //store sensor value in degrees celcius
    tempF = ds.getTempFByIndex(0);
    
    //print value to display
    lcd.clear();
    lcd.setCursor(0,0);
    lcd.print("Temperature:");
    lcd.setCursor(0,1);
    lcd.print(tempF);
    
    //delay of 1000ms is required by the DS18B20, however we don't want to flood the Particle cloud
    delay(10000);
}

