#include <iostream>
#include <windows.h>
#include "Inchworm.h""

int main() {
	HANDLE screen = GetStdHandle(STD_OUTPUT_HANDLE);

	COORD bufferSize = { 80, 38 }; // 80 columns, 38 rows
	SetConsoleScreenBufferSize(screen, bufferSize);

    Inchworm worm;
    worm.setPositionX(10);
    worm.setPositionY(24);

    while (worm.getPositionX() < 80) {
       
        system("CLS");
        worm.setCursor(screen, worm); 
        worm.head();   
        worm.setPositionY(worm.getPositionY() + 1); 
        worm.setCursor(screen, worm); 
        worm.middleOne(); 
        worm.setPositionY(worm.getPositionY() + 1);
        worm.setCursor(screen, worm);  
        worm.bottomOne(); 
        Sleep(500);

        system("CLS");
        worm.setCursor(screen, worm);  
        worm.head();   
        worm.setPositionY(worm.getPositionY() + 1); 
        worm.setCursor(screen, worm);  
        worm.middleTwo(); 
        worm.setPositionY(worm.getPositionY() + 1); 
        worm.setCursor(screen, worm); 
        worm.bottomTwo(); 
        Sleep(500);

     
        system("CLS");
        worm.setCursor(screen, worm); 
        worm.head();    
        worm.setPositionY(worm.getPositionY() + 1); 
        worm.setCursor(screen, worm);
        worm.middleThree(); 
        worm.setPositionY(worm.getPositionY() + 1); 
        worm.setCursor(screen, worm); 
        worm.bottomThree(); 
        worm.moveRight(); 
        Sleep(500);

        if(worm.getPositionX() >= 80)
        {
            worm.setPositionX(10);
            worm.setPositionY(24);
        }
    }
	return 0;
}