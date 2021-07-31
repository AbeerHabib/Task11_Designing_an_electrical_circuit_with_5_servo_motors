// C++ code
//

#include <Servo.h>

Servo s1;
Servo s2;
Servo s3;
Servo s4;
Servo s5;


void setup()
{
  s1.attach(9);
  s2.attach(6);
  s3.attach(5);
  s4.attach(10);
  s5.attach(11);
}

void loop()
{
  s1.write(0);
  s2.write(0);
  s3.write(0);
  s4.write(0);
  s5.write(0);

  delay(2000); // Wait for 1000 millisecond(s)
  
  s1.write(90);
  s2.write(90);
  s3.write(90);
  s4.write(90);
  s5.write(90);
  
  delay(1000); // Wait for 1000 millisecond(s)
  
}