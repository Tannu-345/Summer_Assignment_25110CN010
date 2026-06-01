#include<iostream>
using namespace std;

int main(){
int num,fac,a=0;
cout<<"enter a num:";
cin>>num;

for(int i=1; i<num; i++){
    if(num%i==0){
        fac=i;
        cout<<fac<<"\n";
        a=a+i;
    }
}
if(a==num){
    cout<<"its a perfect nm";
}
else{
    cout<<"its not a perfect num";
}
return 0;
}