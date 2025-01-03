#include <iostream>
#include <iomanip>

#include "Tips.h"

int main()
{
    Tips billsIn;

    double totalBill;
    double tipRate;

    std::cout << "Enter the total bill amount (or -1 to exit): ";
    std::cin >> totalBill;

    while (totalBill != -1) {
        std::cout << "Enter the desired tip rate (as a decimal, e.g., 0.15 for 15%): ";
        std::cin >> tipRate;

        double tip = billsIn.computeTip(totalBill, tipRate);
        std::cout << std::fixed << std::setprecision(2);
        std::cout << "The tip amount is: $" << tip << std::endl;

        std::cout << "\nEnter the total bill amount (or -1 to exit): ";
        std::cin >> totalBill;
    }

    std::cout << "Exiting the program." << std::endl;
    return 0;
}