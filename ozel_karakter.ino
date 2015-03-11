#include <LiquidCrystal.h>
LiquidCrystal lcd(12,11,5,4,3,2);

byte ozelkarakter[8] =
{
  B00000, 
  B00000,
  B01010,
  B00000,
  B10001,
  B01110,
  B00000,
  B00000,
  };

void setup() {

lcd.begin(16,2);
lcd.clear();
lcd.setCursor(0,0);
lcd.print("OZEL KARAKTER");
lcd.createChar(1, ozelkarakter);
lcd.setCursor(0,1);
lcd.write(1);
}

void loop() {


}
