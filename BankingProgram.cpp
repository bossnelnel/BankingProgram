#include "MakeSelection.h"
#include "DispalyBalance.h"

#include <iostream>

int main()
{
    double balance {0.0};
    int selection {makeSelection()};
    
       while (selection != 4)
         {
         switch(selection)
            {
                case 1:
                    displayBalance(balance);
                   selection = makeSelection();
                    break;
                case 2:
                   // balance = makeWithdrawal(balance);
                    break;
                case 3:
                   // balance = makeDeposit(balance);
                    break;
                case 4:
                std::cout << "Thank you for banking with NelNel Banks. Bye-Bye!\n";
                    break;
                default:
                    std::cout << "Invalid selection. Please try again.\n";
                
            }
         }
   
    
    return 0;
}
