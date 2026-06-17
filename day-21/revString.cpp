#include<iostream>
using namespace std;
#include<string>

int main(){
string str;
cout<<"enter the str";
getline(cin,str);

cout<<"reverse is :"<<endl;
for(int i=(str.length())-1;i>=0;i--){
     cout<<str[i];
}
return 0;
}