#include <iostream>
using namespace std;

int main(){
    int age;
    cout<<"............................................."<<endl;
    cout<<"enter ur age:";
    cin>>age;

    if(age<18){
        cout<<"not eligible for voting.";
    }else{
        cout<<"eligible for voting.";
    }
     cout<<".............................................";
    return 0;
}