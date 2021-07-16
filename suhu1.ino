#include<LiquidCrystal.h>
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
float temp;
float tempKe=0;
int tempPin = 0;
int led=13;

void setup() {
  lcd.begin(16, 2); 
  Serial.begin (9600);
}

void loop() {
   temp = analogRead(tempPin);
   // read analog volt from sensor and save to variable temp
   temp = temp * 0.48828125;
   // convert the analog volt to its temperature equivalent
   lcd.setCursor(2,0); 
   lcd.print("TEMP = ");
   lcd.print(temp); // display temperature value
   delay(1000); // update sensor reading each one second
  lcd.setCursor(2,2);
   lcd.print("Kel = ");
  lcd.print(tempKe=((temp)+ 273.15 ));
    if(temp < 100){
  digitalWrite(led, HIGH);
  }else{
  digitalWrite(led, LOW);
  }
  
  
  
}
