#include<iostream>
using namespace std;
int main(){
    int num,count;
    cout<<"enter a num:";
   cin>>num;

    for(int j=num; j>=2; j--){ 
    count =0;//count needs to change after every new j so that it won't get accumulated.

    for(int i=2; i<j; i++){
        if(j%i==0){
        count++;
        break;
        }
    }
    if (count==0){ 
        cout<<"largest prime is:"<<j;
       break;
    }
}
 return 0;
}