//name: Saad Khan
//reg no.:BF25NWELE0705
#include <iostream>
using namespace std;

const int SIZE = 20;

// Function to count unsafe readings
void checkLimits(float arr[]) {
    int below = 0, above = 0;

    for (int i = 0; i < SIZE; i++) {
        if (arr[i] < 3.0)
            below++;
        else if (arr[i] > 4.2)
            above++;
    }

    cout << "\nReadings below 3.0V: " << below << endl;
    cout << "Readings above 4.2V: " << above << endl;

    if (below > 0 || above > 0)
        cout << "Warning: Unsafe voltage readings detected!" << endl;
    else
        cout << "All readings are within safe limits."<<endl;
}

// Function to find max and min voltage
void findMaxMin(float arr[]) {
    float max = arr[0];
    float min = arr[0];

    for (int i = 1; i < SIZE; i++) {
        if (arr[i] > max)
            max = arr[i];
        if (arr[i] < min)
            min = arr[i];
    }

    cout << "\nMaximum Voltage: " << max << " V" << endl;
    cout << "Minimum Voltage: " << min << " V" << endl;
}

int main() 
    {float voltage[SIZE];

    // Input readings
    cout << "Enter 20 voltage readings:"<<endl;
    for (int i = 0; i < SIZE; i++) {
        cout << "Reading " << i + 1 << ": ";
        cin >> voltage[i];
    }

    // Function calls
    checkLimits(voltage);
    findMaxMin(voltage);

    return 0;}
