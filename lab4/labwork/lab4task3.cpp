//name: saad khan
//reg no.BF25NWELE0705
//LAB TASK 4
#include<iostream>
using namespace std;
int main()
{
    int choice;//variable declaration
    float value;//variable declaration
    cout<<"Enter a value: ";//statement to prompt user for input
    cin>>value;//take user input
    cout<<"choose operation from the following menu: "<<endl;//displaying menu options to the user
    cout<<"1 → Convert Kilometers to Meters "<<endl;
    cout<<"2 → Convert Meters to Centimeters "<<endl;
    cout<<"3 → Convert Kilograms to Grams "<<endl;
    cout<<"4 → Convert Celsius to Fahrenheit "<<endl;
    cin>>choice;//take user input for menu option
    switch(choice)//switch statement to determine the conversion based on user input
    {
        case 1://if user input is 1, it will convert kilometers to meters
        cout<<value<<" kilometers is equal to "<<value*1000<<" meters.";
        break;
        case 2://if user input is 2, it will convert meters to centimeters
        cout<<value<<" meters is equal to "<<value*100<<" centimeters.";
        break;
        case 3://if user input is 3, it will convert kilograms to grams
        cout<<value<<" kilograms is equal to "<<value*1000<<" grams.";
        break;
        case 4://if user input is 4, it will convert celsius to fahrenheit
        cout<<value<<" degrees Celsius is equal to "<<(value*9/5)+32<<" degrees Fahrenheit.";
        break;
        default:
        cout<<"Invalid choice. Please select a number between 1 and 4.";//if user input is not
                                                                        // between 1 and 4, it will
                                                                        // print an error message
    }
    return 0;
}