// the setup routine runs once when you press reset:
#include <LiquidCrystal.h>
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup()
{ 
  lcd.begin(16,2);
  Serial.begin(9600);
}

void loop()
{
char data;
data=Serial.read();
  if (data=='W')
  
  {  
     lcd.clear();     
     lcd.setCursor(0,0);
  // lcd.print("Temp:");
   //lcd.setCursor(6,0);
     lcd.print("Motor Forward");
     Serial.write('W');
     
    //delay(100);
  } 
  else if (data=='Z')
  {
    lcd.clear(); 
    lcd.setCursor(0,0);
    lcd.print("Motor Reverse");
    Serial.write('Z');
      //delay(100);
     
  }
  else if (data=='X')
  {
    lcd.clear();  
    lcd.setCursor(0,0);
    lcd.print("Motor Left");
    Serial.write('X');   
      
  
  }
  else if (data=='Y')
  {
    lcd.clear(); 
   lcd.setCursor(0,0);
   lcd.print("Motor Right");
    //delay(100); 
  Serial.write('Y');  
    
  
  }
 
   else if (data=='E')
  {
    lcd.clear(); 
   lcd.setCursor(0,0);
   lcd.print("STOP");
   Serial.write('E');
    //delay(100);   
    
  
  }
  
   delay(10);        // delay in between reads for stability
}
