#include<iostream>
using namespace std;
#include<algorithm>

int main(){
    int n,ar[n];
    cout<<"enter the no:";
    cin>>n;
    cout<<"enter the elements:";

    for(int i=0;i<n;i++){
        cin>>ar[i];
    }
    int search=0;
    for(int st=search;st<n;st++){
        if(ar[st]!=0){
        std::swap(ar[st],ar[search]);
        search++;
        }
        }
    
     for(int i=0;i<n;i++){
        cout<<ar[i];
    }
return 0;
}