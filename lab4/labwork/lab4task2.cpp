//name: saad khan
//reg no.BF25NWELE0705
//LAB TASK 4
#include<iostream>
using namespace std;
int main()
{
    char grade;//variable declaration
    cout<<"Enter your grade (A-F): ";//statement to prompt user for input
    cin>>grade;//take user input
    switch(grade)//switch statement to determine the message based on user input
    {
        case 'A'://if user input is 'A', it will print "Excellent"
        cout<<"Excellent";
        break;
        case 'B':
        cout<<" very Good";//if user input is 'B', it will print "Very Good"
        break;
        case 'C':
        cout<<"good";//if user input is 'C', it will print "Good"
        break;
        case 'D':
        cout<<"pass";//if user input is 'D', it will print "Pass"
        break;
        case 'F':
        cout<<"Fail";//if user input is 'F', it will print "Fail"
        break;
        default:
        cout<<"Invalid grade";//if user input is not
                            // between A and F, it will
                             // print an error message
    }
    return 0;
}