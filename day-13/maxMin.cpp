#include<iostream>
using namespace std;

int main(){
    int n,arr[n];
    cout<<"enter the n:";
    cin>>n;
    cout<<"enter the elements:";
    for(int i=0;i<=n;i++){
        cin>>arr[i];
    }
    int max=INT_MIN;
     for(int i=0;i<=n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    int min=INT_MAX;
    for(int i=0;i<=n;i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }

    cout<<"max is:"<<max<<"\n";
    cout<<"min is:"<<min;
    return 0;
}