#include "MakeDeposit.h"

double makeDeposit(double balance)
{
    std::cout << "Endet the amount you wish to deposit: \n";
    
    double amount {};
    std::cin >> amount;

    amount += balance;
    displayBalance(amount);

    return amount;
    
}