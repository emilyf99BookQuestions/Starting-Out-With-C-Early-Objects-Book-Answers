#include "FishGame.h"
#include <iostream>
#include <vector>
#include "Dice.h"

int main()
{
    srand(static_cast<unsigned>(time(0)));

    // Object Initalization 
    std::vector<FishGame> catches = {
        FishGame("Shark", 100),
        FishGame("Tuna", 75),
        FishGame("Salmon", 50),
        FishGame("Bass", 25),
        FishGame("Cod", 10),
        FishGame("Old Boot", -10)
    };

    Dice dice;
    int totalPoints = 0;
    bool keepFishing = true;

    std::cout << "Fishing Simulator" << std::endl;

    while (keepFishing)
    {
        int roll = dice.rollDice();
        FishGame currentCatch = catches[roll - 1];

        std::cout << "You caught a " << currentCatch.getCatchName() << "." << std::endl;
        totalPoints += currentCatch.getCatchValue();

        char choice;
        std::cout << "Do you want to keep fishing? (y/n): ";
        std::cin >> choice;
        if (choice == 'n' || choice == 'N')
        {
            keepFishing = false;
        }
    }
    std::cout << "\nYou Scored a total of: " << totalPoints << "!" << std::endl;
    FishGame::printFinalMessage(totalPoints);
}
