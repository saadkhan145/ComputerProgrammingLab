//name SAAD KHAN
//reg no. : BF25NWELE0705
#include <iostream>
using namespace std;

int main(){     
	
int source[5]={10,20,30,40,50};   // array declaration in one dimension and initialization
int destination[5];         // destination with size 5


for(int i=0;i<5;i++){         // for loop with initialization of 0  and runs to 4
destination[i]=source[i];}    // assigning value of source to destination

cout<<"source "<<" ";        // source message sent to display
for(int i=0;i<5;i++){        // for loop with initialization of 0  and runs to 4
cout<<source[i]<<" ";}      // value printed to dispaly
cout<<endl;                 // moves the compiler to next line

cout<<"destination"<<" ";    // destination message sent to display
for(int i=0;i<5;i++){        // for loop with initialization of 0  and runs to 4
cout<<destination[i]<<" ";}  // output value sent to display

return 0;          

}