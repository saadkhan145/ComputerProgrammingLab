//name: saad khan
//reg no.BF25NWELE0705
//LAB TASK 3
#include<iostream>
using namespace std;
int main()
{
    int age;//declared a vairable to store age
    cout<<"enter your age : ";
    cin>>age;//input data for age variable
    if(age>=18)//setup a conditional statement using rational operator to
                // check if age is greater than or equal to 18
    {
        cout<<"you are eligible to vote"<<endl;//displaying a message indicating 
                                               //that the person is eligible to vote
    }
    else
    {
        cout<<"you are not eligible to vote"<<endl;//displaying a message indicating
                                                    // that the person is not eligible to vote
    }
     return 0;
}