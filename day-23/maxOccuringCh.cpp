#include<iostream>
#include<string>
using namespace std;

int main(){
    string str;
    cout<<"enter the string:";
    getline(cin,str);
    int freq[256]={0};

    bool visited[256]={false};      //to remove duplicate

    int max=INT_MIN;
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
            freq[str[i]]=count;
        }
    }
    ch=str[i];
    visited[str[i]]=true;
}
for(int i=0;i<str.length();i++){
    if( freq[str[i]]>max){
        max=freq[str[i]];
        ch=str[i];
    }
}
    cout<<ch<<":"<<max;
    return 0;
}