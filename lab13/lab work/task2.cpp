#include <iostream>
#include <cstring>
using namespace std;

// Structure declaration for a Student record
struct Student
{
    char name[50];  // member: student name
    int  age;       // member: student age
    char grade;     // member: grade as a single character (e.g. 'A', 'B')
};

int main()
{
    // Declare and initialize student1 using dot notation
    Student student1;

    strcpy(student1.name, "Ali Hassan");  // copy string into char array member
    student1.age   = 20;                  // assign integer member
    student1.grade = 'A';                 // assign char member directly

    // Display all members of student1
    cout << "Student Name  : " << student1.name  << endl;
    cout << "Student Age   : " << student1.age   << endl;
    cout << "Student Grade : " << student1.grade << endl;

    return 0;
}
