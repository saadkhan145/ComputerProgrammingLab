//name: saad khan
//reg no.BF25NWELE0705
//LAB TASK 4
#include<iostream>
using namespace std;
int main()
{
  int dayofweek;//variable declaration
    cout<<"Enter the day of week (1-7): ";//statement to prompt user for input
    cin>>dayofweek;//take user input
    switch(dayofweek)//switch statement to determine the day of the week based on user input
    {
        case 1://if user input is 1, it will print "Monday"
        cout<<"Monday";
        break;
        case 2:
        cout<<"Tuesday";//if user input is 2, it will print "Tuesday"
        break;
        case 3:
        cout<<"Wednesday";//if user input is 3, it will print "Wednesday"
        break;
        case 4:
        cout<<"Thursday";//if user input is 4, it will print "Thursday"
        break;
        case 5:
        cout<<"Friday";//if user input is 5, it will print "Friday"
        break;
        case 6:
        cout<<"Saturday";//if user input is 6, it will print "Saturday"
        break;
        case 7:
        cout<<"Sunday";//if user input is 7, it will print "Sunday"
        break;
        default:
        cout<<"Invalid input Please enter a number between 1 and 7.";//if user input is not
                                                                    // between 1 and 7, it will
                                                                    // print an error message
    }
    return 0;
}