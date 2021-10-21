//
//  carpoolgroup1.cpp
//  carpoolgroup1
//
//  Created by Jonathan Nelson, Lauren Fleshman, and Morgan Fouch on 1/28/21.
//

/* ###################################################
Daily Driving Cost Calculator
A program that calculates your daily driving cost, so that you can estimate how much money could be saved by car pooling, which also has other advantages such as reducing carbon emissions and reducing traffic congestion. The program should input the following information and display the user’s cost per day of driving to work:

    Total miles driven per day.

    Cost per gallon of gasoline.

    Average miles per gallon.

    Parking fees per day.
 
    Tolls per day.

    Write the algorithm together as a group. This algorithm must be included in your header block documentation for your program.

  

    Write and debug the program. The name of the program file should be carpool<group#>.cpp

    ((Total miles driven per day)/(Average miles per gallon))*(Cost per gallon of gasoline) + parking fees per day + tolls per day
 
 Name: Jonathan Nelson
 Date: 01/28/20
 Assignment: Lab 3 Part 1
###################################################### */

#include <iostream>

using namespace std;

int main() {
    int totalMiles(0);
    int costPerGallon(0);
    int averageMpg(0);
    int parkingFee(0);
    int tolls(0);
    int costPerDay(0);
    
    cout << "Enter the total miles driven per day: ";
    cin >> totalMiles;
    
    cout << "Enter the cost of gas per gallon";
    cin >> costPerGallon;
    cout << "Enter the average miles per gallon of the vehicle: ";
    cin >> averageMpg;
    cout << "Enter any parking fees: ";
    cin >> parkingFee;
    cout << "Enter any tolls: ";
    cin >> tolls;
    
    costPerDay = (((totalMiles)/(averageMpg)*(costPerGallon)+parkingFee+tolls));
    cout << "The user's cost per day of driving to work: " << costPerDay;
    
}
