#include<iostream>
using namespace std;

int main(){
    int ar1[10][10],transpose[10][10];
    int r,c,i,j;
    cout<<"enter row and column size:";
    cin>>r;
    cin>>c;
    cout<<"enter the elements of ar :";
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>ar1[i][j];
        }
    }
    //diagonal sum 
    cout<<"diagonal sum is:";
    int sum=0;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
          if(i==j){
            sum=ar1[i][j];
          }
    }
}
    cout<<sum;
    return 0;
}