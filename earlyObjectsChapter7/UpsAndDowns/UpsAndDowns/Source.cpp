#include <iostream>
#include <windows.h>
#include "UpDown.h"

int main()
{
    HANDLE screen = GetStdHandle(STD_OUTPUT_HANDLE);

    COORD bufferSize = { 80, 38 }; // 80 columns, 38 rows
    SetConsoleScreenBufferSize(screen, bufferSize);

    // Set Initial Position
    UpDown up, down;
    up.setText("UP");
    up.setPositionX(35); 
    up.setPositionY(24); 

    down.setText("DOWN");
    down.setPositionX(45); 
    down.setPositionY(0); 

    while (!UpDown::offScreenChecker(up.getPositionY(), down.getPositionY()))
    {
        // Clear screem every frame
        system("CLS");

        //Get position and draw the text
        UpDown::drawText(screen, up);
        UpDown::drawText(screen, down);

        up.moveUp();
        down.moveDown();
        Sleep(500);
  
    }
}
