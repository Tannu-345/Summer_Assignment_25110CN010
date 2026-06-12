#include<iostream>
using namespace std;

int main(){
    int n, target;
    cout<<"enter the size:";
    cin>>n;
     cout<<"enter the target:";
    cin>>target;
    int ar[n];
    cout<<"enter the elements of array:";
    for(int i=0;i<n;i++){
        cin>>ar[i];
    }
    int sum=0;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            sum=ar[i]+ar[j];
             if(sum==target){
        cout<<"index of pair is:"<<i<<" "<<j<<endl;
    }
        }
       
    }
return 0;
}