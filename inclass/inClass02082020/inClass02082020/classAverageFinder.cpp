//
//  classAverageFinder.cpp
//  inClass02082020
//
//  Created by Jonathan Nelson on 2/8/21.
//

#include <iostream>



using namespace std;

int main()
{
    int studentGrade1{0};
    int studentGrade2{0};
    int studentGrade3{0};
    int studentGrade4{0};
    int studentGrade5{0};
    int studentGrade6{0};
    int studentGrade7{0};
    int studentGrade8{0};
    int studentGrade9{0};
    int studentGrade10{0};
    int studentGradeSum{0};
    int studentGradeAverage{0};
    
    
    cout << "This program will find the average grade out of a ten person class." << endl;
    cout << "Enter the the first student's grade: " << endl;
    cin >> studentGrade1;
    cout << "Enter the the second student's grade: " << endl;
    cin >> studentGrade2;
    cout << "Enter the the third student's grade: " << endl;
    cin >> studentGrade3;
    cout << "Enter the the fourth student's grade: " << endl;
    cin >> studentGrade4;
    cout << "Enter the the fifth student's grade: " << endl;
    cin >> studentGrade5;
    cout << "Enter the the sixth student's grade: " << endl;
    cin >> studentGrade6;
    cout << "Enter the the seventh student's grade: " << endl;
    cin >> studentGrade7;
    cout << "Enter the the eighth student's grade: " << endl;
    cin >> studentGrade8;
    cout << "Enter the the ninth student's grade: " << endl;
    cin >> studentGrade9;
    cout << "Enter the the tenth student's grade: " << endl;
    cin >> studentGrade10;
    
    studentGradeSum = studentGrade1 + studentGrade2 + studentGrade3 + studentGrade4 + studentGrade5 + studentGrade6 + studentGrade7 + studentGrade8 + studentGrade9 + studentGrade10;
    
    studentGradeAverage = studentGradeSum / 10;
    
    cout << "The average grade in the class is: " << studentGradeSum << endl;
    
}


/*
 Set total to zero
 Set grade counter to one
 
 While grade counter is less than or equal to ten
    Prompt the user to enter the next grade
    Input the next grade
    Add the grade into the total
    Add one to the grade counter
 
 Set the class average to the total divided by ten
Print the class average
 */
