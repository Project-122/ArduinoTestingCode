//includes needed for each process
#include <Servo.h>
//servo defining and then position integer setup 
Servo servo1;
int position1 = 0;
Servo servo2;
int position2 = 0;


void setup() { //runs once
  //initial setup 
  servo1.attach(#) //add in Analog port number for servo 1
  servo2.attach(#) //add in Analog port number for servo 2

}

void loop() {//runs repeatedly
  //servo 1
  //moves from 0 to 180 using 1 degree steps
  for (position1for= 0; position1for<= 180; position1for++){
    //steps by 1 degree using iterator, approating 180 position
    servo1.write(position1for);
    //wait time
    delay(15);
  }
  //moves from 180 to 0 using 1 degree steps
  for (position1rev = 180; position1rev >= 0; position1rev-=1){
    //steps by 1 degree using iterator, approaching 0 position
    servo1.write(position1rev);
    //wait time
    delay(15);
  }
}//loop 
