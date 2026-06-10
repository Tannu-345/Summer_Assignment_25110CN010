#include<iostream>
using namespace std;
#include<algorithm>

int main(){
    int n,tar;
    cout<<"enter the n:";
    cin>>n;
    cout<<"enter the tar:";         //without target we need to use hashing.
    cin>>tar;
    int arr[n];
    cout<<"enter the elements:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    int count=0;
    int idx=-1;
    for(int i=0;i<n;i++){
          if(arr[i]==tar){
                count++;
                idx=i;
            }
    }
    cout<<"freq of"<<arr[idx]<<"is:"<<count;
    return 0;
}