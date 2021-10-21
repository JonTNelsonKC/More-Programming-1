//
//  Addition Function.cpp
//  Welcom to C++
//
//  Created by Jonathan Nelson on 1/21/21.
//

/* ###################################################
 Program 1
 inputs three different integers from the keyboard, then prints the sum, the average, the product, the smallest and the largest of these numbers.

 Name: Jonathan Nelson
 Date: 02/01/20
 Assignment: Program 1
###################################################### */

#include <iostream>

int main() {
    int number1{0};
    int number2{0};
    int sum{0};
    
    std::cout << "Enter first integer: ";
    std::cin >> number1;
    
    std::cout << "Enter second integer: ";
    std::cin >> number2;
    
    sum = number1 + number2;
    
    std::cout << "Sum is " << sum << std::endl;
}

