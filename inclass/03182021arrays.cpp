//
//  03182021.cpp
//  inclass
//
//  Created by Jonathan Nelson on 3/18/21.
//

#include <iostream>
#include <iomanip>
#include <array>

using namespace std;
//The way I used
/*int main(){

    int sum{0};
    
    array<int, 5> example{10, 20, 30, 40, 50};
    for (int i=0; i<5; i++) {
        sum = example[i] + sum;
    }
    cout << sum << endl;
}
//Prof. Hale's Way||
*/
/*int main(){

    int total{0};
    
    array<int, 5> example{10, 20, 30, 40, 50};
    for (size_t i{0}; i < example.size(); i++) {
        total += example[i];
    }
    cout << total << endl;
}*/

int main(){
    const size_t arraySize{11};
    array<unsigned int, 11> n{0,0,0,0,0,0,1,2,4,2,1};
    
    cout << "Grade distribution: \n";
    for (size_t i{0}; i < n.size(); ++i){
        if (0 == i){
            cout << " 0-9: ";
        }
        else if(10 == i){
            cout << "  100: ";
        }
        else{
            cout << i * 10 << "-" << (i*10) + 9 << ": ";
        }
        for (unsigned int stars{0}; stars < n[i]; ++stars){
            cout << "*";
        }
    cout << endl;
    }
    
}
