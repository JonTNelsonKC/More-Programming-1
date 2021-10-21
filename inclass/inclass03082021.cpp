//
//  inclass03082021.cpp
//  inclass
//
//  Created by Jonathan Nelson on 3/8/21.
//

#include <iostream>
#include "maximum.h"
using namespace std;

int main(){
    
    int int1{0}, int2{0}, int3{0};
    
    cout << "Enter three integers: ";
    cin >> int1;
    cin >> int2;
    cin >> int3;
    
    cout << maximum(int1, int2, int3) << endl;
}

