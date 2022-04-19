#include <Servo.h>
Servo servo;

int led=6;
int buton=2;

void setup() {
  pinMode(led,OUTPUT);
  pinMode(buton,INPUT);
  servo.attach(9);
  Serial.begin(9600);
}

void loop() {
  
    
  
  for(int i=0;i<=100;i++)
  {
    int butondurum=digitalRead(buton);
    if(butondurum==HIGH)
    {
      i=0;
      Serial.println("Butona Basildi");
      yemle();
    }
    else
    {
    delay(100);
    }
    
  }
  yemle();
}
void yemle()
{
   servo.write(0);//Sonsuz Döner 
  digitalWrite(led,HIGH);
  delay(2000);//Yemleme Süresi
  digitalWrite(led,LOW);
  servo.write(90);//Dönen Servoyu Durdurur.
}
