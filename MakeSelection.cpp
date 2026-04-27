#include "MakeSelection.h"

int makeSelection()
{
    std::cout << "Please select an option:\n";
    std::cout << "1. Display Balance\n";
    std::cout << "2. Make a Withdrawal\n";
    std::cout << "3. Make a Deposit\n";
    std::cout << "4. Exit\n";

    int selection {};
    std::cin >> selection;

    return selection;
}