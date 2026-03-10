#include <iostream>
using namespace std;

int main() {
    int age = 20;
    float marks = 19.99;
    char grade = 'A';
    bool isPassed = true;


    cout << "Age: " << age 
         << " Size: " << sizeof(age) 
         << " Location: " << &age << endl;

    cout << "marks: " << marks 
         << " Size: " << sizeof(marks) 
         << " Location: " << &marks << endl;

    cout << "Grade: " << grade 
         << " Size: " << sizeof(grade) 
         << " Location: " << &grade << endl;

    cout << "Passed: " << isPassed 
         << " Size: " << sizeof(isPassed) 
         << " Location: " << &isPassed << endl;

   

    return 0;
}
