/*
  Omar.ino - Library for Simpling Ultasonic , Dc Motors and Servos through FLOW Shield .
  Created by Omar A.Okasha "Drmicrosoft", November 13, 2016.
  Released into the public domain.
*/

#include <FLOW_2.h>
 
Servo myservo;  // create servo object to control a servo 
Servo myservo1;                // a maximum of eight servo objects can be created 
int pos = 10;
    Omar dcmotor_1(2,3);
  Omar dcmotor_2(4,5);

void setup() {                
  // initialize the digital pin as an output.
  Serial.begin(9600);
   myservo.attach(6);  // attaches the servo on pin 9 to the servo object 
  myservo1.attach(7);
}

// the loop routine runs over and over again forever:
void loop() {

  /*

dcmotor_1.control(0,0);




dcmotor_2.control(1,1);

delay(1000);
dcmotor_1.control(1,1);
dcmotor_2.control(0,0);

*/
delay(1000);

dcmotor_1.control(1,0);
dcmotor_2.control(1,0);
  Serial.println();
delay(1000);
Omar Ultrasonic (14,15);
long length = Ultrasonic.measure();
Serial.print("#1   ");
Serial.print(length);
Serial.print("cm");
  Serial.println();



if(length <20)
{
  int omar = 0;
 
dcmotor_1.control(0,1);
dcmotor_2.control(1,0);
delay(200);
dcmotor_1.control(0,1);
dcmotor_2.control(1,1);

while (1) 
{
  
Omar Ultrasonic1 (8,9);
long length1 = Ultrasonic1.measure();
Serial.print("#2   ");
Serial.print(length1);
Serial.print("cm");
  Serial.println();

if(length1 <40)
{
  if(omar==0)
  {
    omar = 1;
    delay(1000);
  continue;
  }
  else 
  break;
}

  
}

dcmotor_1.control(0,1);
dcmotor_2.control(1,0);
delay(200);

dcmotor_2.control(0,0);
dcmotor_1.control(1,1);
delay(1000);
dcmotor_1.control(0,1);
dcmotor_2.control(1,0);

//Servo
om();
}





Omar Ultrasonic1 (8,9);
long length1 = Ultrasonic1.measure();
Serial.print("#2   ");
Serial.print(length1);
Serial.print("cm");
  Serial.println();




if(length1 <20)
{
  
dcmotor_1.control(0,1);
dcmotor_2.control(1,0);
delay(200);
dcmotor_2.control(0,0);
dcmotor_1.control(1,1);
delay(1000);

dcmotor_1.control(0,1);
dcmotor_2.control(1,0);
delay(200);
Serial.print("Done");
//Servo
om();
}






Omar Ultrasonic2 (10,11);
long length2 = Ultrasonic2.measure();
Serial.print("#3   ");
Serial.print(length2);
Serial.print("cm");
  Serial.println();



if(length2 <20)
{
 
dcmotor_1.control(0,1);
dcmotor_2.control(1,0);
delay(200);
dcmotor_1.control(0,1);
dcmotor_2.control(1,1);

while (1) 
{
  
Omar Ultrasonic1 (8,9);
long length1 = Ultrasonic1.measure();
Serial.print("#2   ");
Serial.print(length1);
Serial.print("cm");
  Serial.println();

if(length1 <40)
break;
  
}

dcmotor_1.control(0,1);
dcmotor_2.control(1,0);
delay(200);

dcmotor_2.control(0,0);
dcmotor_1.control(1,1);
delay(1000);
dcmotor_1.control(0,1);
dcmotor_2.control(1,0);

//Servo
om();
}


Omar Ultrasonic3 (12,13);
long length3 = Ultrasonic3.measure();
Serial.print("#4   ");
Serial.print(length3);
Serial.print("cm");
  Serial.println();


if(length3 <20)
{
 
dcmotor_1.control(0,1);
dcmotor_2.control(1,0);
delay(200);

dcmotor_2.control(1,0);
dcmotor_1.control(0,0);
while (1) 
{
  
Omar Ultrasonic1 (8,9);
long length1 = Ultrasonic1.measure();
Serial.print("#2   ");
Serial.print(length1);
Serial.print("cm");
  Serial.println();

if(length1 <40)
break;
  
}

dcmotor_1.control(0,1);
dcmotor_2.control(1,0);
delay(200);

dcmotor_2.control(0,0);
dcmotor_1.control(1,1);
delay(1000);
dcmotor_1.control(0,1);
dcmotor_2.control(1,0);

//Servo
om();
}




delay(1000);

/*
Serial.print("@1 Angle 0   ");
s1.angle(6,10);
delay(1000);
Serial.print("@1 Angle 90   ");
s1.angle(6,90);
delay(1000);
Serial.print("@1 Angle 180   ");
s1.angle(6,170);
delay(1000);


Serial.print("@2 Angle 0   ");
s2.angle(7,10);
delay(1000);
Serial.print("@2 Angle 90   ");
s2.angle(7,90);
delay(1000);
Serial.print("@2 Angle 180   ");
s2.angle(7,170);
delay(1000);



*/

// There are three Usage of this library 
// First take an Object for each Usage 
// First Dc Motor 
// Like this by sending between (first_pin,second_pin) the two Pins for DC motors
// to control the Motor us send through "object.control( , );" 
// by sending 00,11 to Stop , 10 to Forward , 01 to backward


// Second Ultrasonic
// Like this by sending between (trigger , Echo ) the two Pins for Ultrasonic
// First pin is the trigger and Second is the Echo
// and it returns the value in cm 


// To control Servo Use direct the order >> angle(pin , Degree);



}



void om ()
{
    myservo.write(0);              // tell servo to go to position in variable 'pos' 
    delay(200);
        myservo1.write(0);              // tell servo to go to position in variable 'pos' 
        delay(200);
    myservo.write(70);              // tell servo to go to position in variable 'pos' 
    delay(200);
        myservo1.write(70  );              // tell servo to go to position in variable 'pos' 
  
}
