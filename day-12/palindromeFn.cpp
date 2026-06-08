#include<iostream>
using namespace std;

void palindrome(int a){
    int rev=0,temp;
    temp=a;
    while(temp>0){
        int r=temp%10;
        rev=(rev*10)+r;
        temp/=10;
    }
    if (rev==a){
        cout<<"it's palindrome";
    }else{
        cout<<"it's not palindrome";
    }
    return;
}

int main(){
    int num;
    cout<<"enter a num:";
    cin>>num;
    palindrome(num);
    return 0;
}