//name: Saad Khan
//reg no.:BF25NWELE0705
#include <iostream>
using namespace std;

const int students = 5;
const int days = 7;

// total attendance of each student
void totalattendance(int a[students][days]) {
    for (int i = 0; i < students; i++) {
        int sum = 0;
        for (int j = 0; j < days; j++) {
            sum = sum + a[i][j];
        }
        cout << "student " << i + 1 << " total attendance = " << sum << endl;
    }
}

// student with highest attendance
void highestattendance(int a[students][days]) {
    int max = 0;
    int student = 0;

    for (int i = 0; i < students; i++) {
        int sum = 0;
        for (int j = 0; j < days; j++) {
            sum = sum + a[i][j];
        }

        if (i == 0 || sum > max) {
            max = sum;
            student = i;
        }
    }

    cout << "student with highest attendance = student " << student + 1 << endl;
}

// overall attendance percentage
void percentage(int a[students][days]) {
    int total = 0;

    for (int i = 0; i < students; i++) {
        for (int j = 0; j < days; j++) {
            total = total + a[i][j];
        }
    }

    float percent = (total * 100.0) / (students * days);
    cout << "overall attendance percentage = " << percent << "%" << endl;
}

int main() {
    int a[students][days];

    // input
    for (int i = 0; i < students; i++) {
        cout << "enter attendance for student " << i + 1 << endl;
        for (int j = 0; j < days; j++) {
            cout << "day " << j + 1 << " (1/0): ";
            cin >> a[i][j];
        }
    }

    // function calls
    totalattendance(a);
    highestattendance(a);
    percentage(a);

    return 0;
}