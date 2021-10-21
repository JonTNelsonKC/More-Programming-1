//
//  Studentjonathannelson.h
//  Homework2
//
//  Created by Jonathan Nelson on 2/4/21.
//
// Assignment: Homework 2
// Name: Jonathan Nelson
// Date: 02/02/2020
// Description:


//Part1)
//Create a class called Student that includes 6 pieces of information as private data members: firstname (type string), lastName(type string), year(type int), major(type string), age(type int), gender(type char). Your class should have a constructor with 6 parameters that uses the parameters to initialize the six data members. For the purpose of this exercise, assume that the values provided for each member function is correct. Provide a set and get function for each data member. Provide a member function displayStudent that displays all the member function in a single readable line. Example Jane Doe is a 20 year old female in year 3 of a computer science major.

//<<constructor>> Student(firstname : string, lastName : string, year : int, major : string, age: int, gender : char)

//Public:

//+ setFirstName(theFirstName : string)
//+ setLastName(theLastName : string)
//+ setYear(theYear : int)
//+ setMajor(theMajor : string)
//+ setAge(theAge : int)
//+ setGender(theGender : char)
//+ getFirstName() : string
//+ getLastName() : string
//+ getYear() : int
//+ getMajor() : string
//+ getAge(): int
//+ getGender() : char
//+ displayStudent()



//Private:
//- firstname : string
//lastName : string
//year : int
//major : string
//age: int
//gender : char



#include <string>

using namespace std;

class Student{
public:
 
    Student(std::string fName, std::string lName, char gdr, int yr, std::string maj, int ag)
    : FirstName{fName}, LastName{lName}, Gender{gdr}, Year{yr}, Major{maj}, Age{ag} {} //Contructs the student class with members fName, lName, gdr, yr, maj, and ag
    
    void setFirstName(string fName){
        FirstName = fName;  //Sets the fname input from .cpp file as the value for FirstName
    }
    void setLastName(string lName){
        LastName = lName;  //Sets the lName input from .cpp file as the value for LastName
    }
    void setYear(int yr){
        Year = yr;  //Sets the yr input from .cpp file as the value for Year
    }
    void setMajor(string maj){
        Major = maj;  //Sets the maj input from .cpp file as the value for Major
    }
    void setAge(int ag){
        Age = ag;  //Sets the ag input from .cpp file as the value for Age
    }
    void setGender(char gdr){
        Gender = gdr;  //Sets the gdr input from .cpp file as the value for Gender
    }
    
    
    /*
    if(gender = f){genderWritten = female};
    if(gender = m){genderWritten = male};
    */
    
    string getFirstName(){
        return FirstName;  //Prints FirstName value
    }
   string getLastName(){
        return LastName;  //Prints LastName value
    }
    int getYear(){
        return Year;  //Prints Year value
    }
    string getMajor(){
        return Major; //Prints Major value
    }
    int getAge(){
        return Age;  //Prints Age value
    }
    char getGender(){
        return Gender;  //Prints Gender value
    }
    
    
    // I tried many different iterations of the displayStudent function but could not get one to work. //
    
    /*string displayStudent(){
        return FirstName;
        return " ";
        return LastName;
        return " is a ";
        return int Age();
        return " year old ";
        return char Gender();
        return " in year ";
        return int Year();
        return " of a ";
        return Major;
        return " major. ";}*/
        
        /*cout << FirstName << " " << LastName << " is a " << Age << " year old " << Gender << " in year " << Year << " of a " << Major << " major. ";}*/
    /*void displayStudent(){
        std::cout << FirstName << " " << LastName << " is a " << Age << " year old " << Gender << " in year " << Year << " of a " << Major << " major. ";*/

        
       
        

private:
    string FirstName;
    string LastName;
    int Year;
    string Major;
    int Age;
    char Gender;
    /*string displayStudentFullText;*/
    /*string displayStudentFullText = FirstName " " LastName " is a " Age " year old " Gender " in year " Year " of a " Major " major. ";*/
};
