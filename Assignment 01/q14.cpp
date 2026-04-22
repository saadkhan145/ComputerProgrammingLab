
#include <iostream>
using namespace std;

int main() {
    // Chosen values
    double R1      = 100.0;  // ohms
    double R2      = 200.0;  // ohms
    double voltage = 12.0;   // supply voltage in volts

    // First find total parallel resistance
    double R_parallel = (R1 * R2) / (R1 + R2);

    // Find total current from supply: I = V / R
    double I_total = voltage / R_parallel;

    // Current through R2 using current divider formula
    double I_R2 = I_total * (R1 / (R1 + R2));

    cout << "Current through R2 = " << I_R2 << " A" << endl;

    return 0;
}