//name SAAD KHAN
// REG NO. : BF25NWELE0705
#include <iostream>  
using namespace std; 

float  multiply(int num1, int num2){  

	  return num1*num2;	  
}

int main() {  
	int num1 ,num2;   // variables declaration num1 and num 2
	cout<<"enter two numbers to get product = ";  // output prompt for user
	cin>>num1>>num2;  // takes values from user and stores it in num1 and num2 
	
int	product =multiply(num1,num2);  // function call used to get product
	cout<<"product of num1 and num2 is = "<<product;
	
	return 0;  
	

}