
// Name: Jonathan Nelson
// Date: 02/05/2021
// Assignment: Lab 4
// Description:  The program should read from “lab4input.txt” one integer at a time. If the integer is between 0 and 101 than place it in the file “lab4output.txt” otherwise discard it. As the program executes keep track of the number of integers read from the input file and the number written to the output file.When execution ends print to the screen that you are done and how many numbers were read and how many numbers were written.
//

#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>

using namespace std;

int main()
{
    string inputString;
    int num{0}, amountRead{0}, amountTransfered{0};
    
    ifstream input{"lab4input.txt"};
    ofstream output{"lab4output.txt"};
    
    
    
    while (getline(input,inputString)) {
        num = stoi(inputString);
        if (num > 0 && num < 101) {
            amountTransfered = amountTransfered +1;
            output << num << endl;

        }
        amountRead = amountRead + 1;
    }


    cout << "Process complete, " << amountRead << " numbers were read and " << amountTransfered << " were written" << endl;
    
    return 0;
}
