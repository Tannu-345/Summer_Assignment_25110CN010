#include<iostream>
using namespace std;
int main(){
    int num,r;
    cout<<"enter a num:";
    cin>>num;

    int decNum=0,pow=1;
    while(num>0){
        r=num%10;
        decNum+=r*pow;
        pow*=2;
        num/=10;
    }
    cout<<"decimal num is:"<<decNum;
    return 0;
}