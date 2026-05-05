//name: Saad Khan
//reg no.:BF25NWELE0705
#include <iostream>
using namespace std;

const int regions = 4;
const int days = 7;

// total consumption of each region
void totalregion(float a[regions][days]) {
    for (int i = 0; i < regions; i++) {
        float sum = 0;
        for (int j = 0; j < days; j++) {
            sum = sum + a[i][j];
        }
        cout << "region " << i + 1 << " total = " << sum << endl;
    }
}

// highest demand day
void highestday(float a[regions][days]) {
    float maxsum = 0;
    int day = 0;

    for (int j = 0; j < days; j++) {
        float sum = 0;
        for (int i = 0; i < regions; i++) {
            sum = sum + a[i][j];
        }

        if (j == 0 || sum > maxsum) {
            maxsum = sum;
            day = j;
        }
    }

    cout << "highest demand day = day " << day + 1 << endl;
}

// average consumption
void average(float a[regions][days]) {
    float total = 0;

    for (int i = 0; i < regions; i++) {
        for (int j = 0; j < days; j++) {
            total = total + a[i][j];
        }
    }

    float avg = total / (regions * days);
    cout << "average consumption = " << avg << endl;
}

int main() {
    float a[regions][days];

    // input
    for (int i = 0; i < regions; i++) {
        cout << "enter values for region " << i + 1 << endl;
        for (int j = 0; j < days; j++) {
            cout << "day " << j + 1 << ": ";
            cin >> a[i][j];
        }
    }

    // function calls
    totalregion(a);
    highestday(a);
    average(a);

    return 0;
}