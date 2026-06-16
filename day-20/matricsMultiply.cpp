#include<iostream>
using namespace std;

int main(){
    int ar1[10][10],ar2[10][10];
    int ans[10][10];
    int r1,r2,c1,c2,i,j,k;
    cout<<"enter row and column size of arr 1:";
    cin>>r1;
    cin>>c1;
    cout<<"enter the elements of ar 1:";
    for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            cin>>ar1[i][j];
        }
    }
    cout<<"enter row and column size of arr 2:";
    cin>>r2;
    cin>>c2;
    if(c1!=r2){
        cout<<"multiplication not possible";
    }
    else{
        for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
            ans[i][j]=0;
        }
    }
    cout<<"enter the elements of ar 2:";
    for(int i=0;i<r2;i++){
        for(int j=0;j<c2;j++){
            cin>>ar2[i][j];
        }
    }
    for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++){
            for(int k=0;k<c1;k++){
          ans[i][j]+=ar1[i][k]*ar2[k][j];
        }
    }
    }
    cout<<"the multiplication is:"<<endl;
     for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++){
           cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
}
    return 0;
}