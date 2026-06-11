#include<iostream>
using namespace std;
#include<algorithm>

int main(){
    int n,ar[n];
    cout<<"enter the no:";
    cin>>n;
    cout<<"enter the elements:";

    for(int i=0;i<n;i++){
        cin>>ar[i];
    }

    for(int i=n-1;i>=0;i--){
        cout<<ar[i];
    }
    return 0;
}