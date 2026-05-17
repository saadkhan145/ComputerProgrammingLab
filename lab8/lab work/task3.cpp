//name SAAD KHAN
//REG NO. BF25NWELE0705
#include<iostream>       
using namespace std;     

int main(){       
	
int arr[4][4]={{12,7,25,9},{3,18,14,6},{22,5,11,30},{8,16,19,4}};   
int maxVal=arr[0][0];   

for(int i=0;i<4;i++)       // outer loop which controls number of rows =4
{
for(int j=0;j<4;j++){       // inner loop which controlls number of columns =4
if(arr[i][j]>maxVal) // if condition which cheaks max value
maxVal=arr[i][j];   // if condition becomes true value is printed to display
}
}
cout<<"Maximum value="<<maxVal;   // outputs maximum value to display
return 0; // tells the computer that program has ended successfully
}