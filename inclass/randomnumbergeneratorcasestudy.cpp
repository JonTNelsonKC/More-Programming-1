//
//  randomnumbergeneratorcasestudy.cpp
//  
//
//  Created by Jonathan Nelson on 3/8/21.
//

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
    
    for (unsigned int counter{1}; counter <= 20; ++ counter)
    {
        cout << setw(10) << (1 + rand() % 6);
        
        if (counter % 5 == 0){
            cout << endl;
        }
    }
    
    cout << endl;
}



int main(){
    
    for (int i=0; i<5;i++)
    {
        cout << rand() << "\t";
    }
    
    for (int i=0; i<5;i++)
    {
        cout << rand() << "\t";
    }
    
    srand(staticcast<unsigned int>(time(0)));
    
   // type variableName = shiftingValue + rand() % scalingFactor;
}
