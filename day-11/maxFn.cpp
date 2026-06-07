#include<iostream>
using namespace std;

int max(int a,int b){
    int max;
    if (a>b){
        max=a;
    }else{
        max=b;
    }
        return max;
}

int main(){
    int x,y;
    cout<<"enter 2 nos:";
    cin>>x;
     cin>>y;
    cout<<max(x,y);
    return 0;
}