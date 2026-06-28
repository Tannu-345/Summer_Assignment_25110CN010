#include <iostream>
#include <string>
#include <algorithm>
using namespace std;



int main(){
    int n,len;
    string str;
    int choice;

    while (true) {
        cout << "\n---string Operation System ---\n";
        cout << "1. Add elements\n";
        cout << "2. show length\n";
        cout << "3. append element\n";
        cout << "4. Delete element\n";
        cout << "5. exit\n";
        cout << "Enter your choice (1-5): ";
        cin >> choice;

        if (choice == 5) {
            cout << "Exiting the system.\n";
            break;
        }

        switch(choice){

            case 1:{
                cout<<"enter the string:";
                cin.ignore();
               getline(cin,str); 
               
            }break;

            case 2:{
                cout<<"length is :"<<str.length();
            }break;

            case 3:{// to add an element
                string str2;
                cout<<"enter the string to be appended:";
                cin.ignore();
                getline(cin,str2);
                str+=str2;
                cout<<"final str is:"<<endl; 
                    cout<<str<<" ";
               
            }break;
          case 4:{ 
            char ele, target=-1,i;
            string str3,str4;
                cout<<"enter the element to be deleted:";
                cin>>ele;
                 for(i=0;i<n;i++){
                    if(str[i]==ele){
                        target=i;
                        cout<<str[i];
                        break; //1st occurence
                    }}
                    for (int j=0;j<i;j++){
                        str3.push_back(str[j]);
                    }
                    for(int k=i+1;k<str.length();k++){
                          str4.push_back(str[k]);
                    }
                    str=str3+str4;
                     cout<<"final str is:";
               
                    cout<<str<<" ";
                break;
}

default:
cout<<"invalid choice";
}}
return 0;
}