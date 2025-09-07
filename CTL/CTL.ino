#include <Servo.h>
#include <math.h>
Servo myServo;
int pos = 0;
int deg = 0;
double currentPos;

// C++ code
//
void setup()
{
  Serial.begin(9600);
  myServo.attach(9);
  pinMode(LED_BUILTIN, OUTPUT);
  
  
}

void turn(double degrees){
  int degree = degrees / 1.6071428;
  degree = round(degree);

  for (pos = 0; pos <= degree; pos += 1){
      // Move the servo to 90 degreesm
      currentPos +=1;
      if (currentPos* 1.6071428 >= 360){
        currentPos -= 360/ 1.6071428;
      }
      myServo.write(89);
      delay(20);
      myServo.write(90);
      delay(20);
      //Serial.println(currentPos * 1.6071428);
       
  }
}

void goToDegree(double degree){
  int currentDegree = currentPos* 1.6071428;
  int toTurn = degree - currentDegree;
  Serial.println(degree);
  Serial.println(currentDegree);
  Serial.println(toTurn);
  if (toTurn > 0){
    turn(toTurn);
  } else 
  {
    turn(toTurn + 360);
  }
  for(pos = 0; pos <= 5; pos += 1){
      
      myServo.write(100);
      delay(30);
      myServo.write(90);
      delay(20);
      //Serial.println(currentPos * 1.6071428);
       
  }
}
  


void loop()
{
    goToDegree(270);
    delay(500);
    goToDegree(90);
    delay(500);
    goToDegree(0);
    delay(500);
       
  
 
  delay(500);
  
}

