#include<iostream>
using namespace std;
int main(){
    int num[5]={1,2,3,4,5};
    int *ptr=num; //ptr points to the first element of the array
    cout<<"Elements of the array: ";
    for(int i=0;i<5;i++){
        cout<<*ptr<<" "; //dereferencing the pointer to get the value
        ptr++; //moving the pointer to the next element
    }
    return 0;
}