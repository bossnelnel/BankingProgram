#include "MakeSelection.h"
#include <iostream>

int makeSelection()
{
    std::cout << "Welcome to NelNel Banks. Please select an option:\n";

    int selection {};
    std::cin >> selection;

    return selection;
}