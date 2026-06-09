#include<iostream>
using namespace std;

int main(){
    int n,even ,odd;
    cout<<"enter the n:";
    cin>>n;
    
    int arr[n];
    cout<<"enter the elements:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<"even is "; 
     for(int i=0;i<n;i++){ 
        if(arr[i]%2==0)                //for even
            cout<<arr[i]<<endl;
    }

     cout<<"odd is "; 
    for(int i=0;i<n;i++){
        if(arr[i]%2!=0)                //for odd
            cout<<arr[i]<<endl;
    }
    return 0;
}