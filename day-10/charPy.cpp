#include<iostream>
using namespace std;

int main(){
    int n;
    char ch;
    cout<<"enter a num:";
    cin>>n;

    for(int i=1;i<=n;i++){
        for(int j=n-i;j>=1;j--){
                cout<<" ";}
            for(int k=1;k<=i;k++){
                ch=k+64;
                cout<<ch;
            }  
            for(int l=i-1;l>=1;l--){
                ch=l+64;
                cout<<ch;
            }
            cout<<endl;   
        }
      return 0;
    }