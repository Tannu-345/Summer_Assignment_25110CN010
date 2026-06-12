#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter the size:";
    cin>>n;

    int ar[n],freq[n];
    cout<<"enter the elements of array:";
    for(int i=0;i<n;i++){
        cin>>ar[i];
    }
     for(int i=0;i<n;i++){
        freq[i]=-1;
    }

    for(int i=0;i<n;i++){   
    int count=1;
        for(int j=i+1;j<n;j++){
            if(ar[i]==ar[j]){
                count++;
                freq[j]=0; //removing duplicate 
            }
        }
        if(freq[i]==0){
            continue;
        }
        freq[i]=count;
    }
    
     int max=INT_MIN,idx;
     for(int i=0;i<n;i++){
        if(freq[i]>max){
            max=freq[i];
            idx=i;
        }
     }
     cout<<"max freq is of:"<<ar[idx]<<"is"<<max;
        return 0;
    }