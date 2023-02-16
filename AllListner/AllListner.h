// Button square(&Ps4.square);
// Button cross(&Ps4.cross);
// Button triangle(&Ps4.triangle);
// Button circle(&Ps4.circle);
// Button up(&Ps4.up);
// Button down(&Ps4.down);
// Button left(&Ps4.left);
// Button right(&Ps4.right);
// Button upRight(&Ps4.upRight);
// Button downRight(&Ps4.downRight);
// Button upLeft(&Ps4.upLeft);
// Button downLeft(&Ps4.downLeft);
// Button l1(&Ps4.l1);
// Button r1(&Ps4.r1);
// Button l2(&Ps4.l2,&Ps4.l2Value);
// Button r2(&Ps4.r2,&Ps4.r2Value);
// Button lJoystick(&Ps4.l3,&Ps4.lStickX,&Ps4.lStickY);
// Button rJoystick(&Ps4.r3,&Ps4.rStickX,&Ps4.rStickY);
// Button share(&Ps4.share);
// Button options(&Ps4.options);
// Button psButton(&Ps4.psButton);
// Button touchpad(&Ps4.touchpad);

// Movement leftJoystick(&lJoystick,&r2,&l2);
// DirectionalMovement allAnalog(&lJoystick,&rJoystick,&r2,&l2);
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







// #include <PS4Controller.h>
// #include "Updater/Updater.h"
// #include "Button/Button.h"
// #include "Movement/Movement.h"
// #include "DirectionalMovement/DirectionalMovement.h"
// class AllListner
// {
//     public:
//         AllListner(){};
//         AllListner(bool setAllAnalog = false)
//         {
//             Button square(&Ps4.square);
//             Button cross(&Ps4.cross);
//             Button triangle(&Ps4.triangle);
//             Button circle(&Ps4.circle);
//             Button up(&Ps4.up);
//             Button down(&Ps4.down);
//             Button left(&Ps4.left);
//             Button right(&Ps4.right);
//             Button upRight(&Ps4.upRight);
//             Button downRight(&Ps4.downRight);
//             Button upLeft(&Ps4.upLeft);
//             Button downLeft(&Ps4.downLeft);
//             Button l1(&Ps4.l1);
//             Button r1(&Ps4.r1);
//             Button l2(&Ps4.l2,&Ps4.l2Value);
//             Button r2(&Ps4.r2,&Ps4.r2Value);
//             Button lJoystick(&Ps4.l3,&Ps4.lStickX,&Ps4.lStickY);
//             Button rJoystick(&Ps4.r3,&Ps4.rStickX,&Ps4.rStickY);
//             Button share(&Ps4.share);
//             Button options(&Ps4.options);
//             Button psButton(&Ps4.psButton);
//             Button touchpad(&Ps4.touchpad);
//             if(setAllAnalog)
//             {
//                 DirectionalMovement allAnalog(&lJoystick,&rJoystick,&r2,&l2);
//             }
//             else if(!setAllAnalog)
//             {
//                 Movement leftJoystick(&lJoystick,&r2,&l2);
//             }
//         }   
// }Listner(true);
// #if allAnalogOutput
//     Button square(&Ps4.square);
//     Button cross(&Ps4.cross);
//     Button triangle(&Ps4.triangle);
//     Button circle(&Ps4.circle);

//     Button up(&Ps4.up);
//     Button down(&Ps4.down);
//     Button left(&Ps4.left);
//     Button right(&Ps4.right);

//     Button upRight(&Ps4.upRight);
//     Button downRight(&Ps4.downRight);
//     Button upLeft(&Ps4.upLeft);
//     Button downLeft(&Ps4.downLeft);

//     Button l1(&Ps4.l1);
//     Button r1(&Ps4.r1);
//     Button l2(&Ps4.l2,&Ps4.l2Value);
//     Button r2(&Ps4.r2,&Ps4.r2Value);

//     Button lJoystick(&Ps4.l3,&Ps4.lStickX,&Ps4.lStickY);
//     Button rJoystick(&Ps4.r3,&Ps4.rStickX,&Ps4.rStickY);

//     Button share(&Ps4.share);
//     Button options(&Ps4.options);
//     Button psButton(&Ps4.psButton);
//     Button touchpad(&Ps4.touchpad);

//     DirectionalMovement allAnalog(&lJoystick,&rJoystick,&r2,&l2);
// #else
//     Button square(&Ps4.square);
//     Button cross(&Ps4.cross);
//     Button triangle(&Ps4.triangle);
//     Button circle(&Ps4.circle);

//     Button up(&Ps4.up);
//     Button down(&Ps4.down);
//     Button left(&Ps4.left);
//     Button right(&Ps4.right);

//     Button upRight(&Ps4.upRight);
//     Button downRight(&Ps4.downRight);
//     Button upLeft(&Ps4.upLeft);
//     Button downLeft(&Ps4.downLeft);

//     Button l1(&Ps4.l1);
//     Button r1(&Ps4.r1);
//     Button l2(&Ps4.l2,&Ps4.l2Value);
//     Button r2(&Ps4.r2,&Ps4.r2Value);

//     Button lJoystick(&Ps4.l3,&Ps4.lStickX,&Ps4.lStickY);
//     Button rJoystick(&Ps4.r3,&Ps4.rStickX,&Ps4.rStickY);

//     Button share(&Ps4.share);
//     Button options(&Ps4.options);
//     Button psButton(&Ps4.psButton);
//     Button touchpad(&Ps4.touchpad);

//     Movement leftJoystick(&lJoystick,&r2,&l2);
// #endif
// void setAnalogOutput(bool setAnalog = false)
// {
//     if(!setAnalog)
//     {
//         Movement leftJoystick(&lJoystick,&r2,&l2);
//     }
//     else if(setAnalog)
//     {
//         DirectionalMovement allAnalog(&lJoystick,&rJoystick,&r2,&l2);
//     }
// }