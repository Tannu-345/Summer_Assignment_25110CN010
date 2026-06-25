#include<iostream>
#include<string>
#include<vector>
#include<unordered_set>
using namespace std;

string removeDuplicate(string str){
     unordered_set<char> seen;
     string result=" ";

     for(char ch:str){
        if(seen.find(ch)==seen.end()){  //ch found in seen
            seen.insert(ch);
            result+=ch;
        }
     }
     return result;
}

int main(){
    string input,output;
    cout<<"enter the string:";
    getline(cin,input);
    
    output=removeDuplicate(input);
    cout<<"original string:"<<input<<endl;
    cout<<"after removal string is:"<<output;
    return 0;
}