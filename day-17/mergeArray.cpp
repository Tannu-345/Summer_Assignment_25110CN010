#include <iostream>
using namespace std;

int main(){
    int n,m;
    cout<<"enter the size of a1:";
    cin>>n;
    cout<<"enter the size of a2:";
    cin>>m;
    int a1[n];
    cout<<"enter the elements of array1:";
    for(int i=0;i<n;i++){
        cin>>a1[i];
    }
    int a2[m];
    cout<<"enter the elements of array2:";
    for(int i=0;i<m;i++){
        cin>>a2[i];
    }

    int aSize=0;
    int arMerge[100];

    for(int i=0;i<n;i++){
        arMerge[aSize]=a1[i];
        aSize++;
    }

     for(int i=0;i<m;i++){
        arMerge[aSize]=a2[i];
        aSize++;
    }
    cout<<"merged array is:";
    for(int i=0;i<aSize;i++){
    cout<<arMerge[i]<<" ";
}
    return 0;
}