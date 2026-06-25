#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

bool compareLength(string a,string b){
    if(a.length()==b.length()){
        return a<b;
    }else
    return a.length()<b.length();
}

int main(){
   vector<string>words;
   int n;
   cout<<"enter the no of words:";
   cin>>n;

   cout<<"enter the words:";
   for(int i=0;i<n;i++){
    string temp;
    cin>>temp;
    words.push_back(temp);
   }

   sort(words.begin(),words.end(),compareLength);

   cout<<"words sorted by length:"<<endl;
   for(string word: words){
    cout<<word<<"[len:"<<word.length()<<"], ";
   }
    return 0;
}