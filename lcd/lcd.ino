/*
* Arduino LCD Tutorial
*
* Crated by Dejan Nedelkovski,
* www.HowToMechatronics.com
*
*/
#include <LiquidCrystal.h> // includes the LiquidCrystal Library 
LiquidCrystal lcd(4,6,11,12,13,14); // Creates an LC object. Parameters: (rs, enable, d4, d5, d6, d7) 
void setup() { 
 lcd.begin(16,2); // Initializes the interface to the LCD screen, and specifies the dimensions (width and height) of the display } 
}
