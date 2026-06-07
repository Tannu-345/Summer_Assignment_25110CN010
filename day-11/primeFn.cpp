#include <iostream>
using namespace std;

void checkPrime(int a){
    int count=0;
    if(a<=1){
        cout<<"it's not prime";
    }else{

    for(int i=2;i<a;i++){
        if(a%i==0){
            count++;
        }
    }
    if(count==0){
        cout<<"it's prime";
    }else{
        cout<<"it's not a prime";
    }
}
    return;
}

int main(){
    int a;
    cout<<"enter a nos:";
    cin>>a;
    checkPrime(a);
    return 0;
}