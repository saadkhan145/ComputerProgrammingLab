// name SAAD KHAN
//reg no. : BF25NWELE0705
#include <iostream> 
using namespace std;

int totalsum(int arr[],int a){ 
	int sum=0;           // initial value of sum
	for(int i=0; i<a;i++){ // for loop that runs a times
	sum=sum+arr[i];}     // adds arr[i] with sum every time loop runs
	return sum;    //returns value of sum
}
int main() { 
	
	int a;   // variable declaration a
	cout<<"enter 10 integers = "; 
	cin>>a;  // takes input and stores it in a
	cout<<endl;  // moves to next line
	int arr[a];  // array declaration

	for(int i=0; i<a; i++){   //for lopp that runs a times
		cout<<"enter integer no "<<i+1<<"= ";
		cin>>arr[i];}   // takes input from user every time loop runs
	int sum =totalsum(arr,a);   // function call to find sum
	float average = sum/a;   
			
	cout<<"total sum is = "<<sum<<endl;  
	cout<<"average is = "<<average<<endl; 

    return 0;       
}