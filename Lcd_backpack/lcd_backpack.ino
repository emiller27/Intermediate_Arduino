#include <Wire.h>

#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27,16,2)
void setup(){
lcd.init();
lcd.backlight(HIGH);
lcd.print( hello)
lcd.begin(16,2)





// the loop function runs over and over again forever
 void loop(){
lcd.setCursor (1,0)
lcd.print (millis() / 1000);
   

 

