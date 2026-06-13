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
    
    int uSize=0;
     int aUnion[100];
     for(int i=0;i<n;i++){
        aUnion[uSize]=a1[i];
        uSize++;
     }

     for(int i=0;i<m;i++){
        int isCom=0;
        for(int j=0;j<uSize;j++){
            if(a2[i]==aUnion[j]){
                isCom=1;
                break;
            }
        }
        if(isCom==0){
            aUnion[uSize]=a2[i];
            uSize++;
        }
     }
     cout<<"union is:";
    for(int i=0;i<uSize;i++){
        cout<<aUnion[i]<<" ";
    } 
    return 0;
}