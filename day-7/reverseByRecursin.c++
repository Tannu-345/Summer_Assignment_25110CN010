#include<iostream>
using namespace std;
#include<bits/stdc++.h>

int revNum(int num){
    if(num<10){
        return num;   //base case
    }
    int temp=num;
    int count=0;
    while(temp>0){    //for 10,s power
        count++;
        temp/=10;
    }
    int rev=(num%10)*pow(10,count-1)+revNum(num/10);
    return rev;
}

int main(){
    int num;
    cout<<"enter a num:";
    cin>>num;

    cout<<"reverse is:"<<revNum(num);
    return 0;
}