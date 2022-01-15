// analog-plot
// 
// Read analog values from A0 and A1 and print them to serial port.
//
// electronut.in
 
#include "Arduino.h"
 
void setup()
{
  // initialize serial comms
  Serial.begin(9600); 
}
int i=0;
float x;
float pi=3.1415927;
void loop()
{
  if (i==99) i=0;
  x=pi*float(i)/50.0;
  float val1 = (50)*abs(sin(x));
  float val2 = (50)*abs(sin(pi/9.0+x));
  float val3 = (50)*abs(sin(2*pi/9.0+x));
  float val4 = (50)*abs(sin(3.0*pi/9.0+x));
  float val5 = (50)*abs(sin(4.0*pi/9.0+x));
  float val6 = (100)*abs(sin(5.0*pi/9.0+x));
  float val7 = (1024)*abs(sin(2.0*pi/3.0+x));
  float val8 = (1024)*abs(sin(7.0*pi/9.0+x));
// float val9 = (10)*abs(sin(8.0*pi/9.0+x));
//  float val1 = random(50)*abs(sin(x))+1.0;
//  float val2 = random(50)*abs(sin(pi/9.0+x))+1.0;
//  float val3 = random(50)*abs(sin(2*pi/9.0+x))+1.0;
//  float val4 = random(50)*abs(sin(3.0*pi/9.0+x))+1.0;
//  float val5 = random(50)*abs(sin(4.0*pi/9.0+x))+1.0;
//  float val6 = random(100)*abs(sin(5.0*pi/9.0+x))+1.0;
//  float val7 = random(1024)*abs(sin(2.0*pi/3.0+x))+1.0;
//  float val8 = random(1024)*abs(sin(7.0*pi/9.0+x))+1.0;
//  float val9 = random(10)*abs(sin(8.0*pi/9.0+x))+1.0; 
  i=i+1;
// print to serial
  Serial.print(val1);
  Serial.print(",");
  Serial.print(val2);
  Serial.print(",");
  Serial.print(val3);
  Serial.print(",");
  Serial.print(val4);
  Serial.print(",");
  Serial.print(val5);
  Serial.print(",");
  Serial.print(val6);
  Serial.print(",");
  Serial.print(val7);
  Serial.print(",");
  Serial.print(val8);
//  Serial.print(" ");
//  Serial.print(val9);
  Serial.print("\n");
  // wait 
  delay(500);
}
