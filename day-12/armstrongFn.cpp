#include<iostream>
using namespace std;
#include <cmath>

void armsNum(int a){
    int count=0,num,arms=0;
    num=a;
    while(num>0){
        num=num/10;
        count++;
    }
    num=a;
    while(num>0){
            int r=num%10;
            arms= arms+pow(r,count);
            num/=10;
    }
    if(a==arms){
            cout<<"it's armstrong num";
        }else{
            cout<<"it's not armstrong num";
        }
return;
}

int main(){
    int num;
    cout<<"enter a num:";
    cin>>num;
    armsNum(num);
    return 0;
}