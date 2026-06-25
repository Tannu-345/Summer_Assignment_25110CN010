#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>ar1,ar2;
    vector<int>result;
    int n1,n2;
    cout<<"enter the n1:";
    cin>>n1;
    cout<<"enter the arr1:";
    for(int i=0;i<=n1;i++){
        int temp;
        cin>>temp;
        ar1.push_back(temp);
    }
    cout<<"enter the n2:";
    cin>>n2;
    cout<<"enter the arr2:";
    for(int i=0;i<=n2;i++){
         int temp;
        cin>>temp;
        ar2.push_back(temp);
    }
    int i=0,j=0;
    while(i<ar1.size()&& j<ar2.size()){
        if (ar1[i]<=ar2[j]){
            result.push_back(ar1[i]);
            i++;
        }else{
             result.push_back(ar2[j]);
             j++;
        }
    }
    while(i<ar1.size()){
         result.push_back(ar1[i]);
            i++;
    }
    while(j<ar2.size()){
         result.push_back(ar2[j]);
            j++;
    }

    cout<<"merged array is:";
    for(int num: result)
    cout<<num;
    return 0;   
    }
    

