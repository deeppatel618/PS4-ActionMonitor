#include "Movement/Movement.h"
#include "DirectionalMovement/DirectionalMovement.h"
Button *square;
Button *cross;
Button *triangle;
Button *circle;
Button *up;
Button *down;
Button *left;
Button *right;
Button *upRight;
Button *downRight;
Button *upLeft;
Button *downLeft;
Button *l1;
Button *r1;
Button *l2;
Button *r2;
Button *lJoystick;
Button *rJoystick;
Button *share;
Button *options;
Button *psButton;
Button *touchpad;
DirectionalMovement *allAnalog;
Movement *leftJoystick;
class AllListner
{
    public:
        AllListner(bool setAllAnalog = false)
        {
            square=new Button(&Ps4.square);
            cross=new Button(&Ps4.cross);
            triangle=new Button(&Ps4.triangle);
            circle=new Button(&Ps4.circle);
            up=new Button(&Ps4.up);
            down=new Button(&Ps4.down);
            left=new Button(&Ps4.left);
            right=new Button(&Ps4.right);
            upRight=new Button(&Ps4.upRight);
            downRight=new Button(&Ps4.downRight);
            upLeft=new Button(&Ps4.upLeft);
            downLeft=new Button(&Ps4.downLeft);
            l1=new Button(&Ps4.l1);
            r1=new Button(&Ps4.r1);
            l2=new Button(&Ps4.l2,&Ps4.l2Value);
            r2=new Button(&Ps4.r2,&Ps4.r2Value);
            lJoystick=new Button(&Ps4.l3,&Ps4.lStickX,&Ps4.lStickY);
            rJoystick=new Button(&Ps4.r3,&Ps4.rStickX,&Ps4.rStickY);
            share=new Button(&Ps4.share);
            options=new Button(&Ps4.options);
            psButton=new Button(&Ps4.psButton);
            touchpad=new Button(&Ps4.touchpad);
            if(setAllAnalog)
            {
                allAnalog = new DirectionalMovement(lJoystick,rJoystick,r2,l2);
                // Serial.println("DIRRRRR");
            }
            else if(!setAllAnalog)
            {
                leftJoystick = new Movement(lJoystick,r2,l2);
            }
        }
};