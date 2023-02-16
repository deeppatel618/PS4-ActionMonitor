class Updater
{
public:
    int square, circle, triangle, cross;
    int right, down, up, left;
    int upRight, downRight, upLeft, downLeft;
    int l2, r2, l1, r1;
    int l2Value, r2Value;
    int lStickX, lStickY, l3, rStickX, rStickY, r3;
    int share, options, psButton, touchpad;
    PS4Controller *ps4;
    Updater(PS4Controller *ps4)
    {
        this->ps4 = ps4;
    }
    void update() // Update all the button data
    {
        square = ps4->Square();
        circle = ps4->Circle();
        triangle = ps4->Triangle();
        cross = ps4->Cross();

        right = ps4->Right();
        left = ps4->Left();
        up = ps4->Up();
        down = ps4->Down();

        upRight = ps4->UpRight();
        downRight = ps4->DownRight();
        upLeft = ps4->UpLeft();
        downLeft = ps4->DownLeft();

        l1 = ps4->L1();
        r1 = ps4->R1();
        l2Value = ps4->L2Value();
        r2Value = ps4->R2Value();
        l2 = ps4->L2();
        r2 = ps4->R2();

        lStickX = ps4->LStickX();
        lStickY = ps4->LStickY();
        l3 = ps4->L3();

        rStickX = ps4->RStickX();
        rStickY = ps4->RStickY();
        r3 = ps4->R3();

        share = ps4->Share();
        options = ps4->Options();
        psButton = ps4->PSButton();
        touchpad = ps4->Touchpad();
    }

} Ps4(&PS4);