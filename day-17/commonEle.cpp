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
    cout<<"enter the elements of array1:";
    for(int i=0;i<m;i++){
        cin>>a2[i];
    }
    
     int aIn[100];
     int aSize=0;
     for(int i=aSize;i<m;i++){
        int isCom =0;
        for(int j=0;j<n;j++){
            if(a2[i]==a1[j]){
                isCom=1;
               // break;
            }
            }
            if(isCom==1){
                aIn[aSize]=a2[i];
               aSize++;
            }
        }
        cout<<"common in array is:";
        for(int i=0;i<aSize;i++){
            cout<<aIn[i]<<" ";
        }
    return 0;
}