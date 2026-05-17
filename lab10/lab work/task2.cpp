//name SAAD KHAN
// REG NO. : BF25NWELE0705
#include <iostream>  
using namespace std; 


int getsquare(int number){  
	
	 int squarenumber=number*number; //multiply number by number to get square
	return squarenumber; // returns value of square
	
}
int main() {   
	int number;  // variaable declaration
	cout<<"enter a number to get the square of that number = "; // output prompt for user
	cin>>number;       // takes input from user and stores it in variable number
	int squarenumber=getsquare(number);  // function call to get squarenumber
	cout<<"square of the number "<<number<<" is = "<<squarenumber;
	
	return 0;  
}