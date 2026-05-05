//name: Saad Khan
//reg no.:BF25NWELE0705
#include<iostream>
using namespace std;
double calculateTotalLoad(float loadData[], int size) {//function to calculate total load
    double totalLoad = 0;
    for (int i = 0; i < size; i++) {
        totalLoad += loadData[i];
    }
    return totalLoad;
}
double calculatePeakLoad(float loadData[], int size) {//function to calculate peak load
    double peakLoad = loadData[0];
    for (int i = 1; i < size; i++) {
        if (loadData[i] > peakLoad) {
            peakLoad = loadData[i];
        }
    }
    return peakLoad;
}
int main(){
    float loaddata[24];
    for(int i=0;i<24;i++){//taking load data for 24 hours
        cout<<"Enter the load data for hour in MW "<<i+1<<": ";
        cin>>loaddata[i];
    }
    double totalload = calculateTotalLoad(loaddata, 24);
    double peakload = calculatePeakLoad(loaddata, 24);
    cout<<"Total Load for 24 hours: "<<totalload<<" MW"<<endl;
    cout<<"Peak Load for 24 hours: "<<peakload<<" MW"<<endl;
    return 0;
}