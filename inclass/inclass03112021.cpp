
#include <iostream>
#include "maximum.h"
using namespace std;


unsigned long factorial(unsigned long number) {
    if (number <= 1) {
        return 1;
    }
    else {
        return number * factorial(number - 1);
    }
}


int main(){
    
    unsigned int preimage{0};
    
    do {
        cout << "\nEnter an interger to learn the factorial of your number\nEnter Zero to end the program: \n";
        cin >> preimage;
        
        cout << preimage << " factorial is: " << factorial(preimage) << endl;
    } while (preimage != 0);
    
}
