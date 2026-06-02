#include<iostream>
using namespace std;
int main(){
    int base,pow;
    cout<<"enter the base:";
    cin>>base;

    cout<<"enter the pow:";
    cin>>pow;

    int ans=1;
    for(int i=1; i<=pow; i++){
        ans*=base;
    }

    cout<<"required ans is:"<<ans;
    return 0;
}