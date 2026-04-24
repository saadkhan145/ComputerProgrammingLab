//name:saad khan 
//reg no.:BF25NWELEL0705
// COMPUTER PROGRAMMING LAB / LAB 6
#include <iostream>
using namespace std;

int main() {
    int rows;

    cout << "Enter number of rows: ";
    cin >> rows;

    
    for(int i = rows; i >= 1; i--) {// Outer loop for each row,
                                    // starting from the number of rows down to 1
        
        
        for(int j = 1; j <= i; j++) {// Inner loop to print stars, printing 
                                     //one less star in each subsequent row
            cout << "* ";
        }

      
        cout << endl;
    }

    return 0;
}
