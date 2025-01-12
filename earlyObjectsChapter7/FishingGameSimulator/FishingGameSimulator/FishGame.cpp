#include "FishGame.h"
#include <iostream>

FishGame::FishGame(std::string catchNameIn, int catchValueIn)
{
	catchName = catchNameIn;
	catchValue = catchValueIn;
}

std::string FishGame::getCatchName() { return catchName; }
int FishGame::getCatchValue() { return catchValue; }
void FishGame::setCatchName(std::string catchNameIn) { catchName = catchNameIn; }
void FishGame::setCatchValue(int catchValueIn) { catchValue = catchValueIn; }

void FishGame::printFinalMessage(int totalPoints)
{
    if (totalPoints < 100)
    {
        std::cout << "Uh oh not a good day for fishing!" << std::endl;
    }
    else if (totalPoints >= 100 && totalPoints < 200)
    {
        std::cout << "An okay day for fishing." << std::endl;
    }
    else if (totalPoints >= 200 && totalPoints < 500)
    {
        std::cout << "Congratulations a great day for fishing!" << std::endl;
    }
    else
    {
        std::cout << "Wow, Congratulations, An amazing day for fishing!!" << std::endl;
    }
}

