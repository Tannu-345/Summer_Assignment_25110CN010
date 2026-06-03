#include<iostream>
using namespace std;
int sumDig(int num){
    if(num==0){//base case
        return 0;
    }
    int sum=sumDig(num/10)+(num%10);
    return sum;    
}

int main(){
    int num;
    cout<<"enter a num:";
    cin>>num;

    cout<<"the sum of digits is:"<<sumDig(num)<<endl;
    return 0;
}