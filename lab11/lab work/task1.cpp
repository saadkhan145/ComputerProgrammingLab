//name SAAD KHAN
//reg no. BF25NWELE0705
#include<iostream>
#include<cstring>
using namespace std;

int main(){
    char massege[100];//declaring a string variable
    cout<<"Enter a string: ";
    cin.getline(massege, 100);// Read a line of input into the 'massege' array
    cout<<"The length of the string is: "<<strlen(massege)<<endl;
    

    string massege1;//declaring a string variable
    cout<<"Enter a string 2: ";
    cin>>massege1;// Read a line of input into the 'massege1' string variable
    cout<<"The length of the string is: "<<massege1.length()<<endl;
    return 0;
    
}
