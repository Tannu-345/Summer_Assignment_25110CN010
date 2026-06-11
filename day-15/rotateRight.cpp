#include<iostream>
using namespace std;

int main(){
    int n,k;
    cout<<"enter the no:";
    cin>>n;
    cout<<"enter the elements:";
    int ar[n];
    for(int i=0;i<n;i++){
        cin>>ar[i];
    }

    cout<<"enter the idx from where to rotate:";
    cin>>k;

     for(int i=n-k;i<n;i++){
        cout<<ar[i];
    }
    
    for(int i=0;i<n-k;i++){
       cout<<ar[i];
    }
   
    return 0;
}