#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter the n:";
    cin>>n;

    int arr[n];
    cout<<"enter the elements:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    cout<<"sum is"<<sum<<"\n";

    float avg=float (sum)/n;
    cout<<"avg is"<<avg<<"\n";

    return 0;
}