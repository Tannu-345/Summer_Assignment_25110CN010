#include<iostream>
using namespace std;

int fib(int n){
    if(n<=0){//base case
        return 0;
    }
    if(n==1){
        return 1;
    }
    int fibo=fib(n-1)+fib(n-2);
    return fibo;
}

int main(){
    int n;
    cout<<"enter a num";
    cin>>n;

    cout<<"fibonacci is:"<<fib(n);
    return 0;
}