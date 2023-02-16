#include <PS4Controller.h>
#include "Updater/Updater.h"
void none(){};
void none(int v){};
void none(int lx,int ly,int rx,int ry,int r){};
void none(int x,int y,int r){};
#include "Button/Button.h"
#include "AllListner/AllListner.h"
AllListner *listner;
void updateAllEntities()
{
    Ps4.update();
    updateAllButtons();
}
void initPS4(String addr)
{
    PS4.begin(addr.c_str());
    PS4.attach(updateAllEntities);
}

void getAllAnalog(bool setAllAnalog = false)
{
    listner = new AllListner(setAllAnalog);
}