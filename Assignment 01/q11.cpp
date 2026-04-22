
#include <iostream>
using namespace std;

int main() {
    double R1, R2, R3;// Declare variables for three resistances

    cout << "Enter R1, R2, R3";// Prompt the user to enter three resistance values
    cin >> R1 >> R2 >> R3;

    double totalSeries = R1 + R2 + R3;  // Series: simply add all resistances
    cout << "Total Series Resistance = " << totalSeries << " ohms" << endl;

    return 0;
}
