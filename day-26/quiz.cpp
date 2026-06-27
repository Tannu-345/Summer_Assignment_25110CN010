#include<iostream>
#include<vector>
using namespace std;

struct Student { 
    int result;
    string name;
};


int main(){
    string name,ans1,ans2,ans3,ans4;
    vector<Student> record;
    int choice, count =0;;
    cout<<"enter the name:";
    cin>>name;

    cout<<"................choose one................."<<endl;
    while(choice!=4){
    cout<<"1 for start"<<endl;
    cout<<"2 for display result"<<endl;
    cout<<"3 for exit"<<endl;
    cout<<"enter the choice:";
    cin>>choice;

    switch(choice){
        case 1:{//questions
            cout<<"ans the following:"<<endl;
           cout<<"q1:what's the capital of india?"<<endl;
           cin >>ans1;
           if(ans1=="delhi"||ans1=="Delhi"){
            count++;
           }
           cout<<"q2:what's the capital of japan?"<<endl;
           cin >>ans2;
           if(ans2=="tokyo"||ans2=="Tokyo"){
            count++;
           }
           cout<<"q3:what's the capital of italy?"<<endl;
           cin >>ans3;
           if(ans3=="rome"||ans3=="Rome"){
            count++;
           }
           cout<<"q4:what's the capital of iran?"<<endl;
           cin >>ans4;
           if(ans4=="tehran"||ans4=="Tehran"){
            count++;
           }

           Student newStudent;
           newStudent.result=count;
           newStudent.name=name;
                record.push_back(newStudent);
                cout << "Record added successfully!\n";
        break;
        }
        case 2:{//result
        for (int i=0;i<record.size();i++){
            cout<<"student name:"<<record[i].name<<"| result:"<<record[i].result<<endl;
        }
    }
            
        break;
        case 3:{
            cout<<"quiz completed!"<<endl;
            break;}
         }
        }
    return 0;
}