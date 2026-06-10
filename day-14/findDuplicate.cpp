#include<iostream>
using namespace std;
#include<algorithm>

int main(){
     int n;
    cout<<"enter the no:";
    cin>>n;

    int arr[n];
    cout<<"enter the elements:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int idx=-1;
    bool duplicate=false;

    std::sort(arr,arr+n);
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]!=arr[j]){
                break;
            }else {
                duplicate=true;
                idx=i;
        }
    }
     if (duplicate){
        cout<<"duplicate is:"<<arr[idx]<<endl;
    }
    }
return 0;
}