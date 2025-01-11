#include <iostream>
#include <windows.h>
#include "LeftRight.h"


int main()
{
    HANDLE screen = GetStdHandle(STD_OUTPUT_HANDLE);

    COORD bufferSize = { 80, 38 }; // 80 columns, 38 rows
    SetConsoleScreenBufferSize(screen, bufferSize);

    // Set Initial Position
    LeftRight left, right;
    left.setText("LEFT");
    left.setPositionX(78); 
    left.setPositionY(38 / 2 + 4); 

    right.setText("RIGHT");
    right.setPositionX(0); 
    right.setPositionY(38 / 2 - 4);

    while (!LeftRight::offScreenChecker(left.getPositionX(), right.getPositionX()))
    {
        // Clear screem every frame
        system("CLS");

        //Get position and draw the text
        LeftRight::drawText(screen, left);
        LeftRight::drawText(screen, right);

        left.moveLeft();
        right.moveRight();
        Sleep(166);
    }
    return 0;
}
