#include "DisplayBalance.h"
#include "MakeSelection.h"


double makeWithdrawal(double balance)
{
    std::cout << "Enter the amount you wish to withdraw: \n";
    
    double amount {};
    std::cin >> amount;

    if (amount > balance)
    {
        std::cout << "Insufficient funds. Please enter a valid amount.\n";
        makeWithdrawal(balance);
    }
    else if (amount == 0)
    {
        std::cout << "Withdrawal cancelled. Returning to main menu.\n";
        return 0;
    }
    
    else if (amount < balance)
    {
        balance -= amount;
        
        displayBalance(balance);
        
        return balance;
    }
    
}