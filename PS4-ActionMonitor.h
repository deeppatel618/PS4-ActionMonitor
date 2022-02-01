#include <PS4Controller.h>
#include "Updater/Updater.h"
void none(){};
void none(int v){};
#include "Button/Button.h"
#include "AllListner/AllListner.h"
// #include "Movement/Movement.h"

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
