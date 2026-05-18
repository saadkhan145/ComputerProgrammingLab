#include<iostream>
using namespace std;
int main(){
    int num=10;
   int *ptr =&num;
   cout<<"Value of num: "<<num<<endl;//Value of num: 10
cout<<"Value pointed by ptr: "<<*ptr<<endl;//Value pointed by ptr: 10
return 0;
}