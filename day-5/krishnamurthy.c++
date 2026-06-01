#include<iostream>
using namespace std;

int fac(int n){
     int fact=1;
    for(int i=1; i<=n; i++){
    fact=fact*i;
    }
    return fact;
}

int main(){
int num,r,strNum=0;
cout<<"enter a num";
cin>>num;

int origNum=num;
while(origNum>0){
    r=origNum%10;
    strNum+=fac(r);
   origNum/=10;
}
if (strNum==num){
    cout<<"its strong num";
}
else{
    cout<<"its not a strong num";
}

return 0;
}