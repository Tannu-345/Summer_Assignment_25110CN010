#include<iostream>
using namespace std;

int fibo(int num){
    int n1=0,n2=1,fib;
    for(int i=1; i<=num; i++){
        fib=n1+n2;
        n1=n2;
        n2=fib;
        cout<<fib<< " ";
    }
    return fib;
}

int main(){
    int num,fib;
    cout<<"enter a num:";
    cin>>num;
    fib=fibo(num);
    return 0;
}