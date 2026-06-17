#include<iostream>
#include<string>
using namespace std;


int main(){
string str;
cout<<"enter the str";
getline(cin,str);

int countVow=0;
int countConso=0;

for(int i=0;i<str.length();i++){       //to convert into uppercase
    if(str[i]>='A'&&str[i]<='Z'){
      str[i]=str[i]+32;  
}
}
for(int i=0;i<str.length();i++){
    if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'){
        countVow++;
}else if(str[i]==' '){
    continue;
}else{
    countConso++;
    }
} 
cout<<"no of vowels are:"<<countVow<<endl;
cout<<"no of consonants are:"<<countConso<<endl;
return 0;
}