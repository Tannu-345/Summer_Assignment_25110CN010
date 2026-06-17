#include<iostream>
using namespace std;

int main(){
    string str;
    cout<<"enter a string"<<endl;
    getline(cin,str);

    int length,count=0;
    while(str[count]!='\0'){
        count++;
        length=count;
    }
    cout<<"strtlen is:"<<length;
    return 0;
}