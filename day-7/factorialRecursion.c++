#include<iostream>
using namespace std;

unsigned int fac(int n){
        if((n==1)||(n==0)){//base case
            return 1;
        }
        int fact=fac(n-1)*n;
        return fact;
    }

    int main(){
        int n;
        cout<<"enter the num:";
        cin>>n;

        if(n<0){
            cout<<"enter a valid num";
        }
        else{
            cout<<"factorial is:"<<fac(n);
        }
        return 0;
    }
