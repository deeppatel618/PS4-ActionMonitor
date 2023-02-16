//This file is used to combine left joystick , l2 and r2 button to get x,y and r for movement of any robot
void _joyStickX(int v);
void _joyStickY(int v);
void _l2Btn(int v);
void _r2Btn(int v);
class Movement
{
public:
    Button *joyStick;
    Button *r2, *l2;
    void attachObject();
    double outputX,outputY,outputR;
    void (*allDataValueChange)(int x,int y,int r) = none;
    Movement(Button *joyStick, Button *r2, Button *l2)
    {
        this->joyStick = joyStick;
        this->r2 = r2;
        this->l2 = l2;
        attachAll();
        attachObject();
    }
    void attachAll()
    {
        joyStick->attachAnalogX(_joyStickX);
        joyStick->attachAnalogY(_joyStickY);
        r2->attachAnalogX(_r2Btn);
        l2->attachAnalogX(_l2Btn);
    }
    void m_joyStickX(int v)
    {
        if (v != 0)
            outputX = map(v, -128, 127, -255, 255);
        else
            outputX = 0;
        sendData();
    }
    void m_joyStickY(int v)
    {
        if (v != 0)
            outputY = map(v, -128, 127, -255, 255);
        else
            outputY = 0;
        sendData();
    }
    void m_l2Btn(int v)
    {
        outputR=v*(-1);
        sendData();
    }
    void m_r2Btn(int v)
    {
        outputR=v;
        sendData();
    }
    void sendData()
    {
        // printData();//uncomment to print data from library
        allDataValueChange(outputX,outputY,outputR);
    }
    void printData()
    {
        Serial.println(String(outputX)+","+String(outputY)+","+String(outputR));

    }
    void attachAllData(void (*f)(int x,int y,int r))
    {
        this->allDataValueChange=f;
    }
};
Movement *movementObject;
void Movement::attachObject(){
    movementObject=this;
}
void _joyStickX(int v)
{
    movementObject->m_joyStickX(v);
}
void _joyStickY(int v)
{
    movementObject->m_joyStickY(v);

}
void _l2Btn(int v)
{
    movementObject->m_l2Btn(v);
}
void _r2Btn(int v)
{
    movementObject->m_r2Btn(v);
}