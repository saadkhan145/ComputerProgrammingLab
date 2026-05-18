#include <iostream>
#include <cstring>
using namespace std;

// Structure declaration — defines the "form"; no memory allocated yet
struct Person
{
    char name[50];    // member: name stored as a C-string
    int  age;         // member: age stored as an integer
    char address[100];// member: address stored as a C-string
};

int main()
{
    // Declare a structure variable — memory is allocated here
    Person person1;

    // Initialize members using the dot (.) operator
    strcpy(person1.name,    "Saad Khan");
    person1.age = 21;
    strcpy(person1.address, "Peshawar, Khyber Pakhtunkhwa");

    // Display member values using dot notation
    cout << "Name    : " << person1.name    << endl;
    cout << "Age     : " << person1.age     << endl;
    cout << "Address : " << person1.address << endl;

    return 0;
}
