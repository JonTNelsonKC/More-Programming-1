//
//  Rectangle.cpp
//  
//
//  Created by Jonathan Nelson on 2/14/21.
//

#include "Rectanglejonathannelson.h"
#include <iostream>

using namespace std;

/*
 Name: Jonathan Nelson
 Date: 02/14/2020
 Assignment: Homework 2, Rectangle
 
 Description:  A simple program that calculates basic information about a rectangle using classes, specifically the "rectangle" class in the included .h file
 */

int main(){
    
    Rectangle rectangle1(18, 7);
    Rectangle rectangle2(22, 7);
    Rectangle rectangle3(7, 22);
    Rectangle rectangle4(-2, 7);
    Rectangle rectangle5(7, -2);

    
    cout << "Rectangle #1 Length: " << rectangle1.getLength() << endl;
    cout << "Rectangle #2 Length: " << rectangle2.getLength() << endl;
    cout << "Rectangle #3 Length: " << rectangle3.getLength() << endl;
    cout << "Rectangle #4 Length: " << rectangle4.getLength() << endl;
    cout << "Rectangle #5 Length: " << rectangle5.getLength() << endl;
    
    cout << endl;
    
    cout << "Rectangle #1 Width: " << rectangle1.getWidth() << endl;
    cout << "Rectangle #2 Width: " << rectangle2.getWidth() << endl;
    cout << "Rectangle #3 Width: " << rectangle3.getWidth() << endl;
    cout << "Rectangle #4 Width: " << rectangle4.getWidth() << endl;
    cout << "Rectangle #5 Width: " << rectangle5.getWidth() << endl;
    
    cout << endl;
    
    cout << "Rectangle #1 Area: " << rectangle1.getArea() << endl;
    cout << "Rectangle #2 Area: " << rectangle2.getArea() << endl;
    cout << "Rectangle #3 Area: " << rectangle3.getArea() << endl;
    cout << "Rectangle #4 Area: " << rectangle4.getArea() << endl;
    cout << "Rectangle #5 Area: " << rectangle5.getArea() << endl;
    
    cout << endl;
    
    cout << "Rectangle #1 Perimeter: " << rectangle1.getPerimeter() << endl;
    cout << "Rectangle #2 Perimeter: " << rectangle2.getPerimeter() << endl;
    cout << "Rectangle #3 Perimeter: " << rectangle3.getPerimeter() << endl;
    cout << "Rectangle #4 Perimeter: " << rectangle4.getPerimeter() << endl;
    cout << "Rectangle #5 Perimeter: " << rectangle5.getPerimeter() << endl;
    
    cout << endl;
    
    cout << "Thank you for using the Rectangle Area and Perimeter calculator program" << endl;
    
    cout << endl;
}
