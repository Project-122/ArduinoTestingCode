/*Sample code that works to "blend" inputs into servo position changes so as to make the movement
* more smoothly accelerating compared to more jarring 
*/
//Includes section:
#include <Servo.h>

//variable defining section:

static int stepsToBlendBy = 5;
//servo 1 setup
Servo servo1;
int position1Forward = 0;

//servo 2 setup
Servo servo2;
int position2 = 0;

void setup() {//runs once
  //initial setup attaches for servos to assign them analog pins
  //servo1.attach(#) //add in port # of analog signal input from servo 1
  //servo2.attach(#) //add in port # of analog signal input from servo 2
}//setup 

void loop() {//repeats until powerdown
  //servo 1 section:
    //moves from 0 to 180 using blended angle updates
    do {
      //Takes angular position integer and updates recursively to get to target angle
      position1Forward = //blending math goes here
      servo1.write(position1Forward);
      delay(15);
    } while (position1Forward < 180)
    do {
      //Takes angular position integer and updates recursively to get to target angle
      servo1.write(position1Reverse);
      delay(15);
    } while (position1Reverse > 0)

    //servo 2 section:
      //repeat code from above goes here, but with new integer values.
        //can I possibly use a separate generic method that works for each?
}//loop

void servoBlendingUpdate (Servo servoToMove, int servoAnglePosition, int startingAngle, int finalAngle){
  int iteratedPosition = startingAngle;
  if (startingAngle < finalAngle){
    do{ //Blended motion loop going up in angle
    //takes angular position integer and updates recursively to get to target angle
    iteratedPosition += //code to blend towards target goes here

    } while (iteratedPosition < finalAngle)
  } //when moving "forward" from low to high angle
  else if {
    do { //blended motion loop going down in angle
      //takes angular position integer and updates recursively to get to target angle
      iteratedPosition += //Code to blend towards target goes here

    } while (iteratedPositon > finalAngle)
  }//when moving forward from high to low angle
}//servoBlendingUpdate modular method
