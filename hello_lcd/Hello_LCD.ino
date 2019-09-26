
#include <LiquidCrystal.h>
	
LiquidCrystal lcd (7, 8, 9, 10, 11, 12);

void setup(){
lcd.begin (16, 2);

lcd.print ("     stuuf");
}

// the loop function runs over and over again forever
 void loop(){
	 lcd.setCursor (0, 0);
	 
	 lcd.print (millis() / 1000);
	 lcd.setCursor (1,0);
}
   

 

