#include<iostream>
using namespace std;
#include<string>

int main (){
    string str;
    cout<<"enter the string:";
    getline(cin,str);

    bool visited[256]={false};      //to remove duplicate

    char ch;
    for(int i=0;i<str.length();i++){
         if(str[i]==' '){
            continue;
        }
        if(visited[str[i]]){
            continue;
        }
        int count=0;
    for(int j=0;j<str.length();j++){
        if(str[i]==str[j]){
            count++;
        }
    }
    ch=str[i];
    visited[str[i]]=true;
    if(count>1){
        cout<<ch<<" is "<<count<<" times "<<endl;
        break;
    }}
    return 0;
}