//name SAAD KHAN 
//reg no. : BF25NWELE0705
#include <iostream>         
using namespace std;        

int main()                    
{
    char message[6]={'H','e','l','l','o','\0'}; // declare and initialize character array

    // loop through each character
    for(int i=0;i<5;i++)     // run loop from 0 to 4
    {
        cout<<message[i]<<endl; // print each character on new line
    }

    return 0;               
}