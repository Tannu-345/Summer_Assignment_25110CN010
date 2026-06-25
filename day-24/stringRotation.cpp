#include<iostream>
#include<string>
using namespace std;

int main(){
    string str1,str2;
    cout<<"enter a string:";
    cin>>str1;
     cout<<"enter the rotated string:";
    cin>>str2;
    string strConcatenate=str1+str1;

    if(str1.length()!=str2.length()){
        cout<<"it's not the same string";
    }else if(strConcatenate.find(str2)!=string::npos){    //npos:says that its not found.
        cout<<"its rotated";
    }else{
         cout<<"its not rotated";
    }
        return 0;
}