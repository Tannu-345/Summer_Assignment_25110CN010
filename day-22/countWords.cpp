#include<iostream>
using namespace std;
#include<string>

int main (){
    string str;
    cout<<"enter the string:";
    getline(cin,str);

    int count=1;
    for(char ch: str){
        if(ch==' '){
            count++;
        }
    }
    cout<<"no of words are:"<<count;
    return 0;
}
