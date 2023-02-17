#include <PS4-ActionMonitor.h>

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  initPS4("11:11:11:11:11:11");
  getAllAnalog(false); // true to get AllAnalog Output & false to get AnalogOutput from leftJoystick and l2,r2

  //Attaching function with buttons
  square->attachPress(sqaurePressed);
  square->attachRelease(sqaureReleased);

  circle->attachPress(circlePressed);
  circle->attachRelease(circleReleased);

  triangle->attachPress(trianglePressed);
  triangle->attachRelease(triangleReleased);

  cross->attachPress(crossPressed);
  cross->attachRelease(crossReleased);

  up->attachPress(upPressed);
  up->attachRelease(upReleased);

  down->attachPress(downPressed);
  down->attachRelease(downReleased);

  left->attachPress(leftPressed);
  left->attachRelease(leftReleased);

  right->attachPress(rightPressed);
  right->attachRelease(rightReleased);

  l1->attachPress(l1Pressed);
  l1->attachRelease(l1Released);

  r1->attachPress(r1Pressed);
  r1->attachRelease(r1Released);


  // rJoystick->attachAnalogX(rightjoystickX);
  // rJoystick->attachAnalogY(rightjoystickY);

  // lJoystick->attachAnalogX(leftjoystickX);
  // lJoystick->attachAnalogY(leftjoystickY);

  share->attachPress(sharePressed);
  share->attachRelease(shareReleased);

  options->attachPress(optionPressed);
  options->attachRelease(optionReleased);

  psButton->attachPress(psPressed);
  psButton->attachRelease(psReleased);

  touchpad->attachPress(touchpadPressed);
  touchpad->attachRelease(touchpadReleased);

  // leftJoystick->attachAllData(base); //for analogOutput from leftJoystick,L2 & R2
  allAnalog->attachAllAnalogData(directionalBase); // comment this to get AnalogOutput from leftJoystick, l2, r2 and uncomment leftJoystick
}
int lx,ly,rightX,rightY;
void loop() {
  
}
void rightjoystickX(int v)
{
  rightX=v;
  Serial.println("RightJoystick="+String(rightX)+","+String(rightY));
}
void rightjoystickY(int v)
{
  rightY=v;
  Serial.println("RightJoystick="+String(rightX)+","+String(rightY));
}
void l1Pressed()
{
  Serial.println("l1 Pressed");
}
void l1Released()
{
  Serial.println("l1 Released");
}

void r1Pressed()
{
  Serial.println("r1 Pressed");
}
void r1Released()
{
  Serial.println("r1 Released");
}

void crossPressed()
{
  Serial.println("crossPressed");
}
void crossReleased()
{
  Serial.println("crossReleased");
}

void circlePressed()
{
  Serial.println("circlePressed");
}
void circleReleased()
{
  Serial.println("circlePressed");
}

void trianglePressed()
{
  Serial.println("trianglePressed");
}
void triangleReleased()
{
  Serial.println("triangleReleased");
}

void sqaurePressed()
{
  Serial.println("sqaure pressed");
}
void sqaureReleased()
{
  Serial.println("sqaure Released");
}

void upPressed()
{
  Serial.println("up pressed");
}
void upReleased()
{
  Serial.println("up Released");
}

void downPressed()
{
  Serial.println("down pressed");
}
void downReleased()
{
  Serial.println("down Released");
}

void leftPressed()
{
  Serial.println("left pressed");
}
void leftReleased()
{
  Serial.println("left Released");
}

void rightPressed()
{ 
  Serial.println("right pressed");
}
void rightReleased()
{
  Serial.println("right Released");
}

void sharePressed()
{
  Serial.println("share pressed");
}
void shareReleased()
{
  Serial.println("share Released");
}

void optionPressed()
{
  Serial.println("option pressed");
}
void optionReleased()
{
  Serial.println("option Released");
}

void psPressed()
{
  Serial.println("ps pressed");
}
void psReleased()
{
  Serial.println("ps Released");
}

void touchpadPressed()
{
  Serial.println("touchpad pressed");
}
void touchpadReleased()
{
  Serial.println("touchpad Released");
}
void base(int x,int y,int r)
{
  Serial.println("X="+String(x)+" ,Y="+String(y)+" ,R="+String(r));
}
void directionalBase(int lX,int lY,int rX,int rY,int r)
{
  Serial.println("lX: "+String(lX)+" lY: "+String(lY)+" rX: "+String(rX)+" lY: "+String(rY)+" R: "+String(r));
}