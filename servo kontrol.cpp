#include <Servo.h>
#define pot A0

Servo servo;

void setup()
{
  servo.attach(10);
  Serial.begin(9600);
}

void loop()
{
  int pot_deger = analogRead(pot);
  //Serial.println(pot_deger);
  
  int deger = map(pot_deger, 0, 1023, 0, 180);
  servo.write(deger);
  Serial.print("Aci degeri: ");
  Serial.println(deger);
}
