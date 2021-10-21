// StudentRinker.cpp
// Josh Rinker
// 2/4/21

#include <iostream>
#include "Studentjonathannelson.h"

using namespace std;

int main()
{
    Student student1{"Josh", "Rinker", 'm', 3, "Digital Communication", 25};
    Student student2{"Pam", "Halpert", 'f', 8, "Underwater Basket Weaving", 65};

    
   
    cout << "\n" << student1.getFirstName() << " " << student1.getLastName() << " is a " << student1.getAge() << " year old " << student1.getGender() << " in year " << student1.getYear() << " of a " << student1.getMajor() <<" major." << endl;
    
    cout << student2.getFirstName() << " " << student2.getLastName() << " is a " << student2.getAge() << " year old " << student2.getGender() << " in year " << student2.getYear() << " of a " << student2.getMajor() <<" major." << endl;
    
    cout << "\n";
    
    
    return 0;
}
