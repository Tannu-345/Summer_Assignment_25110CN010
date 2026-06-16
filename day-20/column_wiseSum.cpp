#include<iostream>
using namespace std;

int main(){
    int ar1[10][10],ar2[10][10];
    int ans[10][10];
    int r1,r2,c1,c2,i,j;
    cout<<"enter row and column size of arr 1:";
    cin>>r1;
    cin>>c1;
    cout<<"enter the elements of ar 1:";
    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            cin>>ar1[i][j];
        }
    }
    cout<<"the column wise sum is:"<<endl;
    for(int i=0;i<r1;i++){
        int sum=0;
        for(int j=0;j<c1;j++){
            sum+=ar1[j][i];
        }
          cout<<sum<<endl;
    }
    return 0;
}