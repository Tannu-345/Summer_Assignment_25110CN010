#include <iostream>
using namespace std;

int fac(int a){
    int fact=1;
    for(int i=a;i>=1;i--){
        fact*=i;
    }
    return fact;
}
int main(){
    int a;
    cout<<"enter a no:";
    cin>>a;
    cout<<fac(a);
    return 0;
}