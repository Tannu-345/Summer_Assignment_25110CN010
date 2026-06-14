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

    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++){    //so that j+1!=n
            if(ar[j]>ar[j+1]){
                std::swap(ar[j],ar[j+1]);
            }
        }
    }
    for(int i=0;i<n;i++){
        cout<<ar[i];
    }
    return 0;
}