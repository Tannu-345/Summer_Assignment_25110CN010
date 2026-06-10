#include<iostream>
using namespace std;

int main(){
     int a;
    cout<<"enter the no:";
    cin>>a;
    int arr[a];
    cout<<"enter the elements:";
    for(int i=0;i<a;i++){
        cin>>arr[i];
    }
     int n;
    cout<<"enter the no to be searched:";
    cin>>n;

    bool found=false;           //initiating found
    int index=-1;               //initiating index
    for(int i=0;i<=a;i++){
        if(arr[i]==n){
        found=true;
        index=i;
         break;
        }
    }  
    if(found){
        cout<<"found at:"<<index;
    }
    else{
        cout<<"not found";
    }
    return 0;
}