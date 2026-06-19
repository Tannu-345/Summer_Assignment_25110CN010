#include<iostream>
#include<string>
#include<sstream>
using namespace std;

int main(){
  string str,word;
  cout<<"enter str:";
  getline(cin,str);

  string longestWord={};
  stringstream ss(str);
  while(ss>>word){
    if(word.length()>longestWord.length()){
        longestWord=word;
    }
  }
  cout<<"longest is "<<longestWord<<endl;
  cout<<"length is "<<longestWord.length()<<endl;
 
    return 0;
}