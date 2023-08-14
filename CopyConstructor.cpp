#include <iostream>

using namespace std;
class Student{
private:
string studentName;
int rollNumber;
string schoolName;
int schoolPhone;

public:

//Default Constructor
Student(){

}
// Paramaterized constructor
Student (string studentName, int rollNumber, string schoolName, int schoolPhone){
    this->studentName=studentName;
    this->rollNumber = rollNumber;
    this->schoolName = schoolName;
    this->schoolPhone = schoolPhone;
}

// This is a copy constructor. Infact this is a mix of copyconstructor and paramaterized constructor. 
Student (string studentName,int rollNumber,Student &s1){
schoolName = s1.schoolName;
schoolPhone = s1.schoolPhone;
this->studentName = studentName;
this->rollNumber =rollNumber;
}

void printStudent(){
    cout << studentName<<" "<< rollNumber << " "<< schoolName << " "<< schoolPhone<<endl;
}

};

int main (){

Student s1;
Student s2("Pravat",12,"OccidentalPublic", 4009043);
Student s3("HariAmbani",13,s2); // Object lai naya object banda copy garne
s1.printStudent();
s2.printStudent();
s3.printStudent();


    return 0;
}