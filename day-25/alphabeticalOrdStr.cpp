#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
   vector<string> names;
   int n;
   cout<<"enter the no of names:";
   cin>>n;
    cout<<"enter the names:";
    for(int i=0;i<n;i++){
        string temp;
        getline(cin,temp);
        names.push_back(temp);
    }

    sort(names.begin(),names.end()); //for writing in alphabetical order
    cout<<"names in order:"<<endl;
    for(string name:names){
        cout<<name<<endl;
    }
    return 0;
}
