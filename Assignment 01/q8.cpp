#include<iostream>
using namespace std;
int main(){
    double numerator=21, denominator=0;
    if (denominator == 0) cout << "Error: Division by zero" << endl;// Handle division by zero case
    else {
        double result = numerator / denominator;// Perform division if denominator is not zero
        cout << "Result: " << result << endl;
    }
}