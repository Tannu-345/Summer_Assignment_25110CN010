#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter the size:";
    cin>>n;

    int ar[n];
    cout<<"enter the elements of array:";
    for(int i=0;i<n;i++){
        cin>>ar[i];
    }

    for(int i=0;i<n;i++){   
         int count=1;
        for(int j=i+1;j<n;j++){
            if(ar[i]==ar[j]){
                count++;
        }
    }
    if(count>1){
            cout<<"duplicate is:"<<ar[i]<<endl;
        }
}

return 0;
}