//name SAAD KHAN
//REG NO. BF25NWELE0705
#include<iostream>    
using namespace std;   

int main(){        
	
int total=0;     
int rowSum=0;    
int colSum=0;   
	
int matrix[3][3]={{4,7,2},{6,1,9},{3,5,8}}; // 2d array declaration and initialization

for(int i=0;i<3;i++)     // outer loop that controlls the number of colums =3
{
for(int j=0;j<3;j++){  // inner loop that controlls number of rows =3
rowSum+=matrix[i][j];   // takes element in row i and colum j and adds it with row sum to get row sum
}
cout<<"Row "<<i<<" sum="<<rowSum<<endl;   //displays row no and its sum
total+=rowSum;     // adds total with row sum 
}
for(int j=0;j<3;j++){  // outer loop that controlls the number of rows =3 here 

for(int i=0;i<3;i++){  // inner loop that controlls number of columns =3 here
colSum+=matrix[i][j];    // adds column sum with element in column j and row i
}
cout<<"Column "<<j+1<<" sum="<<colSum<<endl;  // displays column sum 
}
cout<<"Total sum="<<total;    // prints total to display
return 0; //tells the computer that program has ended successfully
}