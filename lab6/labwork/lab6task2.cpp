
//name:saad khan 
//reg no.:BF25NWELEL0705
// COMPUTER PROGRAMMING LAB / LAB 6
#include <iostream>
using namespace std;

int main() {
    
    for(int i = 1; i <= 10; i++) {// Outer loop for numbers 1 to 10
        cout << "Multiplication Table of " << i << endl;// Print the header for the multiplication table
        
        for(int j = 1; j <= 10; j++) {// Inner loop for multiplying with numbers 1 to 10
            cout << i << " x " << j << " = " << i * j << endl;// Print the multiplication result
        }
        
        cout << endl; 
    }

    return 0;
}


    
