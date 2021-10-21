//
//  classAverageFinderWhile.cpp
//  inClass02082020
//
//  Created by Jonathan Nelson on 2/8/21.
//

#include <iostream>


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


int main(){
    
    using namespace std;
    
    int total{0};
    int gradeCounter{1};
    int studentGrade{0};
    
    while (gradeCounter <= 10) {
        cout << "Enter student grade: " << endl;
        cin >> studentGrade;
        total = studentGrade + total;
        gradeCounter = gradeCounter + 1;
    }
    int average{total / 10};
    
    cout << "The class average was " << average << endl;
}
