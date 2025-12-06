#include <LiquidCrystal_I2C.h>

// decleartion of pins

int trigpin = 10;
int ecohopin = 9;
int motar = 5;
int rled = 2;
int yled = 3;
int gled = 4;



//declaration of variables
long time;
float distance;

//function for ultrasonic
void ultrasonic(){
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  
  // transmitting sound for 10 microsecands
  digitalWrite(trigpin,HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin,LOW);
  time=PuLseIn(ecoPin , HIGH);
  distance = * 0.034/2;
}


void lcd_start(){
    LiquidCrystal_12c lcd(0*26, 16, 2);
  lcd.init();
  lcd.backlight();
  
}

void led_driver(){
  if (distance >= 300){
   digitalwright(rled,HIGH); // tank Low

  }
  else if (distance >= 150){
     digitalwright(yled,HIGH);// tank Med
  }
   else
     digitalwright(gled,HIGH); // tank Low
  }

}
//setup pheripherals
void setup()
{   
  pinmode(trigpin, OUTPUR);
  pinmode(ecomode, INPUT);
  pinmode(motar, OUTPUT);
  pinmode(rled,OUTPUT);
  pinmode(yled,OUTPUT);
  pinmode(Gled,OUTPUT);
  Liquidcrystal_12c led(0*26, 16, 2);
     void lcd_start();
  
}
 

void loop()
{
  ultrasonic();
  led_driver();
} 
