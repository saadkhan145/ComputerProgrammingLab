//name: Saad Khan
//reg no.:BF25NWELE0705
#include<iostream>
using namespace std;
double calculateTotalEnergy(int energyGen[], int size) {//function to calculate total energy generation
    double totalEnergy = 0;
    for (int i = 0; i < size; i++) {
        totalEnergy += energyGen[i];
    }
    return totalEnergy;
}
double calculatePeakEnergy(int energyGen[], int size) {//function to calculate peak energy generation
    double peakEnergy = energyGen[0];
    for (int i = 1; i < size; i++) {
        if (energyGen[i] > peakEnergy) {
            peakEnergy = energyGen[i];
            cout<<"Peak energy generation is at hour "<<i+1<<" with "<<peakEnergy<<" MW"<<endl;
        }
    }
    return peakEnergy;
    
}
double avgEnergy(int energyGen[], int size) {//function to calculate average energy generation
    double totalEnergy = calculateTotalEnergy(energyGen, size);
    return totalEnergy / size;
}
int main(){
    int EGen[24];
    for(int i=0;i<24;i++){//taking energy generation data for 24 hours
        cout<<"Enter the energy generation data for hour in MW "<<i+1<<": ";
        cin>>EGen[i];
    }
    calculateTotalEnergy(EGen, 24);
    calculatePeakEnergy(EGen, 24);
    avgEnergy(EGen, 24);
    return 0;



}
