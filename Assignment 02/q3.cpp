//name: Saad Khan
//reg no.:BF25NWELE0705
#include<iostream>
using namespace std;
int main(){
    int mata[3][3],matb[3][3],matc[3][3];//matc is the resultant matrix
    cout<<"Enter the elements of the first matrix: "<<endl;
    for(int i=0;i<3;i++){//taking input for the first matrix
        for(int j=0;j<3;j++){
            cin>>mata[i][j];
        }
    }
    cout<<"Enter the elements of the second matrix: "<<endl;
    for(int i=0;i<3;i++){//taking input for the second matrix
        for(int j=0;j<3;j++){
            cin>>matb[i][j];
        }
    }
    for(int i=0;i<3;i++){//adding the two matrices and storing the result in matc
        for(int j=0;j<3;j++){
            matc[i][j]=mata[i][j]+matb[i][j];
        }
    }
    cout<<"The sum of the two matrices is: "<<endl;//displaying the resultant matrix
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<matc[i][j]<<" ";
        }
        cout<<endl;
    }

}