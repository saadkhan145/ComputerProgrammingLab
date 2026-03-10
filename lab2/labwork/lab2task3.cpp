#include<iostream>
using namespace std;
int main()
{
    float tempCel;
    float tempFah;

    cout<<" enter temprature in celsius =\n";
    cin>> tempCel;
    
    tempFah=(tempCel*9/5)+32;
    cout<<"temprature in fahrenheit ="<< tempFah;
    
    return 0;


}
