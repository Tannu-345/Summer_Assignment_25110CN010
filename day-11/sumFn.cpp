#include<iostream>
using namespace std;

int sum(int a,int b){
    int sum=0;
    sum=a+b;
    return sum;
}

int main(){
    int x,y;
    cout<<"enter 2 nos:";
    cin>>x;
     cin>>y;
    cout<<sum(x,y);
    return 0;
}