int defaultZeroAnalog = 0;
class stateManager
{
public:
    int prevValue, *currentValue, value;
    int threshold = 0;
    int buffer=0;
    stateManager(int *value, int threshold = 0,int buffer=0)
    {
        this->buffer=buffer;
        this->threshold = threshold;
        currentValue = value;
        prevValue = *value;
    }

    bool check()
    {
        if (prevValue != *currentValue)
        {
            if (*currentValue != 0 && *currentValue != 1 && abs(*currentValue - prevValue) < threshold)
                return false;
            if(abs(*currentValue)<buffer) *currentValue=0;
            prevValue = *currentValue;
            value = *currentValue;
            return true;
        }
        return false;
    }
};
class Button
{
public:
    stateManager *currentValue1;
    stateManager *currentValue;
    stateManager *currentState;
    Button(int *btn, int *btnValue = &defaultZeroAnalog,int *btnValue1=&defaultZeroAnalog)
    {
        SetButton();
        this->currentValue1=new stateManager(btnValue1,5,10);
        this->currentState = new stateManager(btn);
        this->currentValue = new stateManager(btnValue, 5,10);
    }
    Button(){};
    void SetButton();
    void (*buttonPressed)() = none;
    void (*buttonReleased)() = none;
    void (*buttonValueChange)(int v) = none;
    void (*buttonValueChange1)(int v) = none;
    void attachRelease(void (*f)())
    {
        this->buttonReleased = f;
    }
    void attachPress(void (*f)())
    {
        this->buttonPressed = f;
    }
    void attachAnalog(void (*f)(int v))
    {
        this->buttonValueChange = f;
    }
    void attachAnalog1(void (*f)(int v))
    {
        this->buttonValueChange1 = f;
    }
    void update()
    {
        if (currentValue->check())
        {
            buttonValueChange(currentValue->value);
        }
        if (currentValue1->check())
        {
            buttonValueChange1(currentValue1->value);
        }
        if (currentState->check())
        {
            if (currentState->value)
            {
                buttonPressed();
            }
            else
            {
                buttonReleased();
                buttonValueChange(0);
                buttonValueChange1(0);
            }
        }
    }
};
Button *allButton[20];
int buttonIndex = 0;
void Button::SetButton()
{
    allButton[buttonIndex++] = this;
}
void updateAllButtons()
{
    for (int i = 0; i < buttonIndex; i++)
    {
        allButton[i]->update();
    }
}
