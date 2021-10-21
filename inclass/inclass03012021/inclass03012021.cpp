




#include <iostream>
#include <cmath>

using namespace std;

int maximum(int x, int y, int z);

int main(){

    cout << "Enter three integer values: ";
    int x, y, z;
    cin >> x >> y >> z;
    
    cout << "The maximum interger value is: " << maximum(x, y, z) << endl;
    
}

int maximum(int x, int y, int z){
    int maximumValue{x};
    if(y > maximumValue){maximumValue = y;}
    if(z > maximumValue){maximumValue = z;}
    
    return maximumValue;
}
