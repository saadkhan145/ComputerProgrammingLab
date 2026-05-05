//name: Saad Khan
//reg no.:BF25NWELE0705
#include<iostream>
using namespace std;
void revarray(int arr[], int size)//function to reverse the array
    {int i=0,j=size-1;
    while(i<j){
        int temp=arr[i];
        arr[i]=arr[j];//swap the elements
        arr[j]=temp;
        i++;
        j--;}
    }
int main(){
   int mar[5]={1,2,3,4,5};//initialize the array with some values
    cout <<"Array before reversing: ";
    for(int i=0;i<5;i++){
        cout<<mar[i]<<" ";
    }
    cout<<endl;
    revarray(mar,5);//calling the fuction to reverse the array
    
    cout<<"Array after reversing: ";
    for(int i=0;i<5;i++){
        cout<<mar[i]<<" ";
    }
    cout<<endl;
    return 0;}


    
