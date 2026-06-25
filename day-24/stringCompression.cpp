#include<iostream>
#include<string>
using namespace std;

int main(){
    string str,str2="";
    cout<<"enter a string";
    getline(cin,str);

    int freq[256]={};
    int count=1;
    char ch;
    for(int i=0;i<str.length();i++){
        if(str[i]==str[i+1]){
            count++;
        }else{
            str2.push_back(str[i]);       //at whatever index if will get false the value of that index will be pushed here.
            str2.push_back('0'+count);    //'0'=48.
           count=1;
        }
    }
   cout<<"comp str:"<<str2;
    return 0;
}