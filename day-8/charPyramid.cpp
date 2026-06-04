#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter a num:";
    cin>>n;
    char ch;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            ch=j+64;
          cout<<ch;
        }cout<<endl;
    }
    return 0;
}