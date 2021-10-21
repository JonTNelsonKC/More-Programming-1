/*
 Name: Jonathan Nelson
 Date: 03/04/2021
 Assignment: Lab 8
 Description: Program that demonstrates the celsius and fahrenheit functions, both of which are set up to handle integers and doubles using overflow.
 */

//Assignment Information
/*
 Temperature Conversion
 
 Write functions celsius that returns the Celsius equivalent of a Fahrenheit temperature.

 Write functions fahrenheit that returns the Fahrenheit equivalent of a Celsius temperature.

 Use function overloading so that you can pass the functions an int or a double and get the same return type.

 Write a main that shows the use of these functions to return

 Celsius for 90.3763, 0, 32, 56.743, 0.0, 166 Fahrenheit

 Fahrenheit for 0, 45.363, 22, 55.3, 100.0000, 70 Celsius
 This program should not prompt the user for information.
 */

#include <iostream>
using namespace std;

int celsius(int fx);
double celsius(double fy);

int fahrenheit(int cx);
double fahrenheit(double cy);

int main(){
    
    cout << "90.3763 degrees Fahrenheit is " << celsius(90.3762) << " degrees Celsius\n";
    cout << "0 degrees Fahrenheit is " << celsius(0) << " degrees Celsius\n";
    cout << "32 degrees Fahrenheit is " << celsius(32) << " degrees Celsius\n";
    cout << "56.743 degrees Fahrenheit is " << celsius(56.743) << " degrees Celsius\n";
    cout << "0.0 degrees Fahrenheit is " << celsius(0.0) << " degrees Celsius\n";
    cout << "166 degrees Fahrenheit is " << celsius(166) << " degrees Celsius\n";
    
    cout << endl;
    
    cout << "0 degrees Celsius is " << fahrenheit(0) << " degrees fahrenheit\n";
    cout << "45.363 degrees Celsius is " << fahrenheit(45.363) << " degrees fahrenheit\n";
    cout << "22 degrees Celsius is " << fahrenheit(22) << " degrees fahrenheit\n";
    cout << "55.3 degrees Celsius is " << fahrenheit(55.3) << " degrees fahrenheit\n";
    cout << "100.0000 degrees Celsius is " << fahrenheit(100.0000) << " degrees fahrenheit\n";
    cout << "70 degrees Celsius is " << fahrenheit(70) << " degrees fahrenheit\n";
}

int celsius(int fx){
    int cx{0};
    cx=((fx-32)*(5.0/9.0));
    return cx;
}
double celsius(double fy){
    double cy{0.0};
    cy=((fy-32)*(5.0/9.0));
    return cy;
}
int fahrenheit(int cx){
    int fx{0};
    fx=(cx*(9.0/5.0)+32);
    return fx;
}
double fahrenheit(double cy){
    double fy{0.0};
    fy=(cy*(9.0/5.0)+32);
    return fy;
}
