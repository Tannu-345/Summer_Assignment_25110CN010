#include<iostream>
using namespace std;

int main(){
    int n,sumO,sumN;
    cout<<"enter the size:";
    cin>>n;
    int oldAr[n],newAr[n-1];
    cout<<"enter the elements of old array:";
    for(int i=0;i<n;i++){
        cin>>oldAr[i];
    }
    cout<<"enter the elements of new array:";
    for(int i=0;i<n;i++){
        cin>>newAr[i];
    }

    sumO=0,sumN=0;
    for(int i=0;i<n;i++){
       sumO+=oldAr[i];
    }
    for(int i=0;i<n;i++){
        sumN+=newAr[i];
    }
    int missingNum=0;
    missingNum=sumO-sumN;
    cout<<"missing num is:"<<missingNum;
return 0;
}