/*
Simple Serial

 This example reads three analog sensors (potentiometers are easiest)
 and sends their values serially. Use the Max/MSP and Proccessing code
 to access them. One one at the time as the serial port can only be 
 accessed by one application. 

 The circuit:
 * potentiometers attached to analog inputs 0, 1, and 2

 http://www.arduino.cc/en/Tutorial/VirtualColorMixer

 created 2 Dec 2006
 by David A. Mellis
 modified 30 Aug 2011
 by Tom Igoe and Scott Fitzgerald
 from R.Hoadley;
 modified by tedor, 2014 for http://tedor.info/stech2014
 Edited by Evangelos Alexiou, 2018

  This example code is in the public domain.
 */

const int val00 = A0;  // sensor 01
const int val01 = A1;  // sensor 02
const int buttonPin = 2;     // the number of the pushbutton pin
int buttonState = 0;         // variable for reading the pushbutton status

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  Serial.print(analogRead(val00));
  Serial.print(",");
  Serial.print(analogRead(val01));
  Serial.print(",");
  Serial.println(digitalRead(buttonState));
}
