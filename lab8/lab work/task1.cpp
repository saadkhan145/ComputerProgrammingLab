//name SAAD KHAN 
//REG NO. BF25NWELE0705
#include<iostream>    
using namespace std;   

int main(){   
	
int matrix[3][3]={{1,2,3},{4,5,6},{7,8,9}};  // declartaion of 2d array and initialization

for(int i=0;i<3;i++){    // for loop with initialization of 0  and runs to 3(outer loop controls columns)
	
for(int j=0;j<3;j++){    // for loop with initialization of 0  and runs to (inner loop controls rows)
	
cout<<matrix[i][j]<<" ";  // sends element in row i and column j to display

}
cout<<endl;               // moves the compiler to next line
}

return 0;  //tells the computer that program has ended successfully
}
