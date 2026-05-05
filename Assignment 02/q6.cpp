//name: Saad Khan
//reg no.:BF25NWELE0705
#include <iostream>
#include <string>
using namespace std;

const int SIZE = 5;

// Function to find topper
void findTopper(string names[], int marks[]) {
    int maxIndex = 0;

    for (int i = 1; i < SIZE; i++) {
        if (marks[i] > marks[maxIndex]) {
            maxIndex = i;
        }
    }

    cout << "\nTopper: " << names[maxIndex]
         << " with " << marks[maxIndex] << " marks.\n";
}

// Function to display pass/fail status
void displayStatus(string names[], int marks[]) {
    cout << "\nPass/Fail Status:\n";
    for (int i = 0; i < SIZE; i++) {
        cout << names[i] << " : ";
        if (marks[i] >= 50)
            cout << "Pass";
        else
            cout << "Fail";
        cout << endl;
    }
}

// Function to search student by name
void searchStudent(string names[], int marks[], string searchName) {
    bool found = false;

    for (int i = 0; i < SIZE; i++) {
        if (names[i] == searchName) {
            cout << "\nStudent Found!\n";
            cout << "Name: " << names[i] << endl;
            cout << "Marks: " << marks[i] << endl;
            found = true;
            break;
        }
    }

    if (!found) {
        cout << "\nStudent not found.\n";
    }
}

int main() {
    string names[SIZE];
    int marks[SIZE];
    string searchName;

    // Input student data
    cout << "Enter details of " << SIZE << " students:\n";
    for (int i = 0; i < SIZE; i++) {
        cout << "\nEnter name of student " << i + 1 << ": ";
        cin >> names[i];

        cout << "Enter marks of " << names[i] << ": ";
        cin >> marks[i];
    }

    // Call functions
    findTopper(names, marks);
    displayStatus(names, marks);

    cout << "\nEnter student name to search: ";
    cin >> searchName;
    searchStudent(names, marks, searchName);

    return 0;
}