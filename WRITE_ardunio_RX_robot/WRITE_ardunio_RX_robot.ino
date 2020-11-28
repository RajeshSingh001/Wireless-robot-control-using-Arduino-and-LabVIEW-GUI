// the setup routine runs once when you press reset:
#include <LiquidCrystal.h>
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup()
{ 
  lcd.begin(16,2);
  Serial.begin(9600);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
}

// the loop routine runs over and over again forever:
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
     digitalWrite(6, HIGH);
     digitalWrite(7, LOW);
     digitalWrite(8, HIGH);
     digitalWrite(9, LOW);
     
    //delay(100);
  } 
  else if (data=='Z')
  {
    lcd.clear(); 
    lcd.setCursor(0,0);
    lcd.print("Motor Reverse");
      //delay(100);
     digitalWrite(6, LOW);
     digitalWrite(7, HIGH);
     digitalWrite(8, LOW);
     digitalWrite(9, HIGH);
     
  }
  else if (data=='X')
  {
    lcd.clear();  
    lcd.setCursor(0,0);
    lcd.print("Motor Left"); 
     digitalWrite(6, HIGH);
     digitalWrite(7, LOW);
     digitalWrite(8, LOW);
     digitalWrite(9, LOW);  
      
  
  }
  else if (data=='Y')
  {
    lcd.clear(); 
   lcd.setCursor(0,0);
   lcd.print("Motor Right");
    //delay(100); 
     digitalWrite(6, LOW);
     digitalWrite(7, LOW);
     digitalWrite(8, HIGH);
     digitalWrite(9, LOW);  
    
  
  }
 
   else if (data=='E')
  {
    lcd.clear(); 
   lcd.setCursor(0,0);
   lcd.print("STOP");
    //delay(100);
     digitalWrite(6, LOW);
     digitalWrite(7, LOW);
     digitalWrite(8, LOW);
     digitalWrite(9, LOW);  
    
  
  }
  
   delay(10);        // delay in between reads for stability
}
