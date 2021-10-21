//
//  inclass02012020.cpp
//  inclass02012020
//
//  Created by Jonathan Nelson on 2/1/21.
//

/* ###################################################
 02/01/2020
 inputs three different integers from the keyboard, then prints the sum, the average, the product, the smallest and the largest of these numbers.

 Name: Jonathan Nelson
 Date: 02/01/20
 Assignment: In-Class Assignment
###################################################### */


// Fig. 3.9: AccountTest.cpp
// Displaying and updating Account balances.
#include <iostream>
#include "Accountjonathannelson.h"

using namespace std;

int main()
{
   Account account1{"Jane Green", 50};
   Account account2{"John Blue", -7};
    Account account3{"Patrick Mahomes", 2000};

   // display initial balance of each object
   cout << "account1: " << account1.getName() << " balance is $"
      << account1.getBalance();
   cout << "\naccount2: " << account2.getName() << " balance is $"
      << account2.getBalance();
    cout << "\naccount3: " << account3.getName() << " balance is $"
       << account3.getBalance();

   cout << "\n\nEnter deposit amount for account1: "; // prompt
   int depositAmount;
   cin >> depositAmount; // obtain user input
   cout << "adding " << depositAmount << " to account1 balance";
   account1.deposit(depositAmount); // add to account1's balance

    // prompts user for an amount to withdraw from bank account -added by me //
    cout << "\n\nEnter withdrawal amount for account1: ";
    int withdrawAmount;
    cin >> withdrawAmount;
    cout << "subtracting " << withdrawAmount << " from account1 balance";
    account1.withdraw(withdrawAmount);
    
    
   // display balances
   cout << "\n\naccount1: " << account1.getName() << " balance is $"
      << account1.getBalance();
   cout << "\naccount2: " << account2.getName() << " balance is $"
      << account2.getBalance();
    cout << "\naccount3: " << account3.getName() << " balance is $"
       << account3.getBalance();

   cout << "\n\nEnter deposit amount for account2: "; // prompt
   cin >> depositAmount; // obtain user input
   cout << "adding " << depositAmount << " to account2 balance";
   account2.deposit(depositAmount); // add to account2 balance

    // prompts user for an amount to withdraw from bank account -added by me //
    cout << "\n\nEnter withdrawal amount for account2: ";
    cin >> withdrawAmount;
    cout << "subtracting " << withdrawAmount << " from account2 balance";
    account2.withdraw(withdrawAmount);
    
   // display balances
   cout << "\n\naccount1: " << account1.getName() << " balance is $"
      << account1.getBalance();
   cout << "\naccount2: " << account2.getName() << " balance is $"
      << account2.getBalance() << endl;
    cout << "\naccount3: " << account3.getName() << " balance is $"
       << account3.getBalance() << endl;
    
    cout << "\n\nEnter deposit amount for account3: "; // prompt
    cin >> depositAmount; // obtain user input
    cout << "adding " << depositAmount << " to account3 balance";
    account3.deposit(depositAmount); // add to account3 balance

     // prompts user for an amount to withdraw from bank account -added by me //
     cout << "\n\nEnter withdrawal amount for account3: ";
     cin >> withdrawAmount;
     cout << "subtracting " << withdrawAmount << " from account3 balance";
     account3.withdraw(withdrawAmount);
    
    // display balances
    cout << "\n\naccount1: " << account1.getName() << " balance is $"
       << account1.getBalance();
    cout << "\naccount2: " << account2.getName() << " balance is $"
       << account2.getBalance() << endl;
     cout << "\naccount3: " << account3.getName() << " balance is $"
        << account3.getBalance() << endl;
}

/**************************************************************************
 * (C) Copyright 1992-2017 by Deitel & Associates, Inc. and               *
 * Pearson Education, Inc. All Rights Reserved.                           *
 *                                                                        *
 * DISCLAIMER: The authors and publisher of this book have used their     *
 * best efforts in preparing the book. These efforts include the          *
 * development, research, and testing of the theories and programs        *
 * to determine their effectiveness. The authors and publisher make       *
 * no warranty of any kind, expressed or implied, with regard to these    *
 * programs or to the documentation contained in these books. The authors *
 * and publisher shall not be liable in any event for incidental or       *
 * consequential damages in connection with, or arising out of, the       *
 * furnishing, performance, or use of these programs.                     *
 *************************************************************************/
