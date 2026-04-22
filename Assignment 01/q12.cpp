
#include <iostream>
using namespace std;

int main() {
    double R1, R2, R3;

    cout << "Enter R1, R2, R3 (in ohms): ";// Prompt the user to enter three resistance values
    cin >> R1 >> R2 >> R3;

    // Parallel formula: take reciprocal of sum of reciprocals
    double totalParallel = 1.0 / (1.0/R1 + 1.0/R2 + 1.0/R3);
    cout << "Total Parallel Resistance = " << totalParallel << " ohms" << endl;

    return 0;
}