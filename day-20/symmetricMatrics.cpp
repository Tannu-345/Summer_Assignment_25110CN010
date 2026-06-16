#include<iostream>
using namespace std;

int main(){
    int ar1[10][10],transpose[10][10];
    int r,c,i,j;
    cout<<"enter row and column size:";
    cin>>r;
    cin>>c;
    cout<<"enter the elements of ar 1:";
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>ar1[i][j];
        }
    }
    //for transpose
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
           transpose[i][j]=ar1[j][i];
        }
    }
    if(transpose[i][j]==ar1[i][j]){
        cout<<"yes,its symmetric";
    }else{
        cout<<"no,its not symmetric";
    }
    return 0;
}