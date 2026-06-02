#include<iostream>
using namespace std;
int main(){
    int num,r;
    cout<<"enter a num: ";
    cin>>num;

    int count=0;
    while(num>0){
        r=num%10;
        if(r==1){
            count++;
        }
        num/=10;
    }
    cout<<"set bit count is:"<<count;
    return 0;
}