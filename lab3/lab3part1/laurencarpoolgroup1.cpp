//
//  laurencarpoolgroup1.cpp
//  lab3part1
//
//  Created by Jonathan Nelson on 1/28/21.
//
/* ###################################################
Adding Integers Progam
Adds Integers
Name: Lauren Fleshman, Jonathan Nelson, Morgan Fouch
Date: 1/28/21
Assignment: Lab 3
###################################################### */
 
 
 
 
/* Create a program that calculates your daily driving cost, so that you can estimate how much money could be saved by car pooling,
which also has other advantages such as reducing carbon emissions and reducing traffic congestion. The program should input the following
information and display the user’s cost per day of driving to work:
 
Total miles driven per day.
 
Cost per gallon of gasoline.
 
Average miles per gallon.
 
Parking fees per day.
 
Tolls per day.*/
 
#include <iostream> // enables input and output
using namespace std;
 
int main() {
   int totalMiles(0); //set to 0
   int costPerGallon(0); //set to 0
   int averageMiles(0); //set to 0
   int parkingFees(0); //set to 0
   int tolls(0); //set to 0
   int costPerDay(0); //set to 0
    int gallonsUsed(0);
 
   cout << "Enter the Total miles driven per day: "; // gets miles
   cin >> totalMiles; // reads in number
 
   cout << "Enter the Cost per gallon of gasoline: "; // gets cost
   cin >> costPerGallon; // reads in number
 
   cout << "Enter the Average miles per gallon: "; // gets avg. miles
   cin >> averageMiles; // reads in number
  
   cout << "Enter the Parking fees per day: "; // gets parking fees
   cin >> parkingFees; // reads in number
  
   cout << "Enter the Tolls per day: "; // gets tolls
   cin >> tolls; // reads in number
 
    gallonsUsed = totalMiles/averageMiles;
    
   costPerDay = (gallonsUsed*costPerGallon)+parkingFees+tolls; // all the math
 
   cout << "The the user’s cost per day of driving to work: " << costPerDay << endl; // hopefully prints it out
 
}
