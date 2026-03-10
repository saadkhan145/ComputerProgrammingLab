#include<iostream>
using namespace std;
int main()
{
    int finalmarks,midmarks,sessmarks;//declared three variables to store marks of final, midterm and sessional exams
    cout<<"Enter your final exam marks: ";//input data for final marks variable
    cin>>finalmarks;//input data for final marks variable
    cout<<"Enter your midterm marks: ";//input data for midterm marks variable
    cin>>midmarks;//input data for midterm marks variable
    cout<<"Enter your sessional marks: ";//input data for sessional marks variable
    cin>>sessmarks;//input data for sessional marks variable
    float totalmarks=(finalmarks)+(midmarks)+(sessmarks);//calculate total marks by adding final, midterm and sessional marks
    cout<<"Your total marks are: "<<totalmarks<<endl;//display total marks
    cout<<"Your grade is: ";//display grade based on total marks using if-else statements
    if(totalmarks>=90)  //setup conditional statement using rational operator to check if total marks are greater than or equal to 90
        {cout<<"A"<<endl;}//display grade A if total marks are greater than or equal to 90
    else if(totalmarks>=85) //setup conditional statement using rational operator to check if total marks are greater than or equal to 85 
        {cout<<"A-"<<endl;}
    else if(totalmarks>=80)  
        {cout<<"B+"<<endl;}
    else if(totalmarks>=75)  
        {cout<<"B"<<endl;}
    else if(totalmarks>=70)  
        {cout<<"C+"<<endl;}
    else if(totalmarks>=65)  
        {cout<<"C"<<endl;}
    else if(totalmarks>=60)  
        {cout<<"D+"<<endl;}
    else if(totalmarks>=50)  
        {cout<<"D"<<endl;}
    else
        {cout<<"F"<<endl;}
    return 0;
}