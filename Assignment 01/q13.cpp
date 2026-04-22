
#include <iostream>
using namespace std;

int main() {
    // Chosen values 
    double R1 = 100.0;   // ohms
    double R2 = 200.0;   // ohms
    double V  = 12.0;    // total supply voltage in volts

    // Voltage across R2 using the voltage divider formula
    double V_R2 = V * (R2 / (R1 + R2));

    cout << "Voltage across R2 = " << V_R2 << " V" << endl;

    return 0;
}