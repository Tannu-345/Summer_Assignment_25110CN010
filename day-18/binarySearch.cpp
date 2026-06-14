#include<iostream>
using namespace std;
#include<algorithm>

int main(){
    int n,search;
    cout<<"enter the size:";
    cin>>n;
    cout<<"enter the search:";
    cin>>search;
    int ar[n];
    cout<<"enter the elements of array:";
    for(int i=0;i<n;i++){
        cin>>ar[i];
    }
   
    int st=0, end=n;
    while(st<=end){
         int mid=(st+(end-st))/2;
        if(ar[mid]==search){
            cout<<"found at:"<<mid;
            break;
        }
        else if(search<ar[mid]){
            end=mid-1;
        }
        else{
            st= mid+1;
        }
        }
    
    return 0;
}