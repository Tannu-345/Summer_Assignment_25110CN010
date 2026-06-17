#include<iostream>
using namespace std;
#include<string>

int main(){
string str;
cout<<"enter the str";
getline(cin,str);

string lowerToUppercase;
for(int i=0;i<str.length();i++){
    if(str[i]>='a'&&str[i]<='z'){
      str[i]=str[i]-32;  
}
lowerToUppercase=str[i];
}
cout<<str;
//cout<<"lowerToUppercase is"<<lowerToUppercase;
    return 0;
}
