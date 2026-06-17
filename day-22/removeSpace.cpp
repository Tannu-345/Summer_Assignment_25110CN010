#include<iostream>
using namespace std;
#include<string>

int main (){
    string str;
    cout<<"enter the string:";
    getline(cin,str);

    string print=str;
    int count=1;
    for(char ch: str){
        if(ch==' '){
           continue;
        }
        print=ch;
         cout<<print;
    }
    return 0;
}
