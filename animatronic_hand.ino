#include <Servo.h> //reader file is added to access servo motor

Servo servo1; //initialising variable servo1 as a servo
Servo servo2;
Servo servo3;

int a = A0; //variable a will refer to pin A0 on the arduino board
int b = A1;
int c = A2;

int val1=0; //declaring a variable val1 with value = 0
int val2=0;
int val3=0;

void setup() //initialisation
{
  servo1.attach(3); //servo1 variable can control the servo attached to pin 3
  servo2.attach(5);
  servo3.attach(6);
  
  servo1.write(0); //setting the angle of servo1 to zero degree
  servo2.write(0);
  servo3.write(0);

  Serial.begin(9600); //setting the baud rate for serial communication to 9600 bits/sec
  
}

void loop() //loop function

{
  val1=analogRead(a); //read the analog value in "a" and store the value in "val1" variable
  val2=analogRead(b);
  val3=analogRead(c);

  if(val1<100) //check if val1<40 and enter the method if true-flex state
  {
    servo1.write(180); //angle of servo attached to pin3=180 degree
    delay(3); //delay for 3 ma
  }

  if(val1>200) //check if val1>200 and enter the method if true-normal state
  {
    servo1.write(0); //angle of servo attached to pin3=0 degree
  }

  //similarly for other 2 servos

   if(val2<40) //check if val1<40 and enter the method if true-flex state
  {
    servo2.write(180); //angle of servo attached to pin5=180 degree
    delay(3); //delay for 3 ma
  }

  if(val2>200) //check if val1>200 and enter the method if true-normal state
  {
    servo2.write(0); //angle of servo attached to pin5=0 degree
  }

   if(val3<40) //check if val1<40 and enter the method if true-flex state
  {
    servo3.write(180); //angle of servo attached to pin6=180 degree
    delay(3); //delay for 3 ma
  }

  if(val3>200) //check if val1>200 and enter the method if true-normal state
  {
    servo3.write(0); //angle of servo attached to pin6=0 degree
  }
}
