#include<iostream>
using namespace std;
int main(){
    int num,r;
    cout<<"enter a decimal no:";
    cin>>num;

    int binNum=0;
    int pow=1;
    while(num>0){
        r=num%2;
        binNum+=r*pow;
        pow*=10;
        num/=2;
    }
    cout<<"binary number is:"<<binNum;
    return 0;
}