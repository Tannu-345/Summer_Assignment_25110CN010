#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){
     string str1,str2;
    bool isAnagram=true;
    cout<<"enter 2 string:";
    getline(cin,str1);
    // cout<<"enter the string2:";
    getline(cin,str2);
    string freq[256]={};

    char max1=CHAR_MIN;
     char max2=CHAR_MIN;
     int idx;
    if(str1.length()!=str2.length()){
         cout<<"not an anagram.";
        }else{
        std::sort(str1.begin(),str1.end());
        std::sort(str2.begin(),str2.end());
             
        for(int i=0;i<str1.length();i++){
        if(str2[i]!=str1[i]){
           isAnagram=false;
           break;
        }}}
        if(isAnagram){
            cout<<"its an anagram";
        }else{
            cout<<"its not an anagram";
        }
    return 0;
}
