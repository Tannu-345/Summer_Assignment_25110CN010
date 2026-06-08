#include<iostream>
using namespace std;

void perfect(int num){
    int perfect,temp;
    temp=num;
    for(int i=1;i<num;i++){
        if(num%i==0){
            perfect+=i;
        }
    }
    if(perfect==temp){
        cout<<"it's perfect";
    }else{
        cout<<"it's not perfect";
    }
    return;
}

int main(){
    int num;
    cout<<"enter a num:";
    cin>>num;
    perfect(num);
    return 0;
}
