#include<iostream>
#include<string>
using namespace std;

int main (){
    string str;
    cout<<"enter the string:"<<endl;
    getline(cin,str);
    string store=str;
    string rev="";

    for(int i=(str.length())-1;i>=0;i--){
      rev+=str[i];
    }cout<<endl;
    if(store==rev){
        cout<<"palindrome"<<endl;
    }else{
        cout<<"not a palindrome"<<endl;
    }
    cout<<"original:"<<store<<endl;
    cout<<"reversed:"<<str<<endl;
    return 0;
}
