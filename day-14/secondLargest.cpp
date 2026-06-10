#include<iostream>
using namespace std;
#include<algorithm>

int main(){
    int n;
    cout<<"enter the n:";
    cin>>n;
    int arr[n];
    cout<<"enter the elements:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
// if sorted initially
    std::sort(arr,arr+n);  //begin,end+1
    cout<<"second largest by method1:"<<arr[n-2]<<endl;

// if not sorted initially
int max=INT_MIN;
int secMax=INT_MIN;

for(int i=0;i<n;i++){
    if(arr[i]>max){
        secMax=max;
        max=arr[i];
    }
    else if(arr[i]>secMax && arr[i]!=max){
       secMax=arr[i];
    }
}
cout<<"second largest by method2:"<<secMax;

    return 0;
}
