/*name: saad khan 
reg no. BF25NWELE0705
course code:EE-170L  */
#include<iostream>
using namespace std;
int main(){
    int integer,i=1,sum=0;//initialization
    cout<<"enter an integer: ";//taking the positive integer from user
    cin>>integer;//input
    while (i<=integer){//condition
        sum=sum+i;//the numbers from 1 to n are added to the sum variable
        i++;//increment
    }
    cout<<"sum of all numbers from 1 to "<<integer<<" is : "<<sum<<endl;//output 
    return 0;   
}