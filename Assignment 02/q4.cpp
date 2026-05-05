//name: Saad Khan
//reg no.:BF25NWELE0705
#include <iostream>
#include <algorithm>
#include <string>  // Explicitly include for std::string
using namespace std;
int main() {
    string strArr[5] = {"saad", "hamza", "ali", "hassan", "usman"};  // Array of strings
    sort(strArr, strArr + 5);  // Sorting the array of strings in alphabetical order
    cout << "The sorted array of strings is: " << endl;
    for (int i = 0; i < 5; i++) {
        cout << strArr[i] << endl;  // Displaying the sorted array of strings
    }
    return 0;
}
