// This program compares two numbers and displays whether they are equal, or which one is greater.
//name: saad khan
//reg no.BF25NWELE0705
//LAB TASK 3
#include<iostream>
using namespace std;
int main()
{
    int num1,num2;//declared two variables 

    cout<<"enter first number : ";
    cin>>num1;                      //took data for variables 

    cout<<"enter 2nd number : ";
    cin>>num2;                      //took data for 2nd variable

    if(num1==num2)//setup a if statement using rational operators to compare 
                 //number 1st with number 2nd 
    {
        cout<<"number 1st and number 2nd are equal"<<endl;//Displaying statment based 
                                                          //on the comparison results.
    }
    if(num1>num2)//setup a if statement using rational operators to compare 
                 //number 1st with number 2nd  
    {
        cout<<"number 1st is greater than number 2nd"<<endl;//displaying massege based
                                                          //on the comparison results.
    }
    if(num1<num2)//setup a if statement using rational operators to compare 
                 //number 1st with number 2nd 
    {
        cout<<"number 2nd is greater than number 1st"<<endl;//Displaying messages based 
                                                          //on the comparison results.
    }
     return 0;
 }
    
