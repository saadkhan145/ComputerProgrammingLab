//name: Saad Khan
//reg no.:BF25NWELE0705

#include<iostream>
using namespace std;

int main() {
    double avg, sum = 0;
    int arr[10];

    cout << "Enter 10 values: " << endl;

    for(int i = 0; i < 10; i++) {//input values and calculate sum
        cin >> arr[i];
        sum += arr[i];
    }

    avg = sum / 10;

    int max = arr[0];//initialize max and min with the first element of the array
    int min = arr[0];

    for(int i = 1; i < 10; i++) {//find max and min
        if(arr[i] > max)
            max = arr[i];

        if(arr[i] < min)
            min = arr[i];
    }

    cout << "Average: " << avg << endl;
    cout << "Maximum: " << max << endl;
    cout << "Minimum: " << min << endl;

    return 0;
}