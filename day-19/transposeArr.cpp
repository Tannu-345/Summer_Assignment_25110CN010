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
    cout<<"transpose is:";
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
           transpose[i][j]=ar1[j][i];
        cout<<transpose[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}