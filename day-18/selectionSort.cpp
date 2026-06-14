#include<iostream>
using namespace std;
#include<algorithm>

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
         int smallestIdx=i;
         for(int j=i;j<n;j++){
            if(ar[j]<ar[smallestIdx]){
                smallestIdx=j;
            }
         }
         std::swap(ar[smallestIdx],ar[i]);
         cout<<ar[i];
    }
    return 0;
}