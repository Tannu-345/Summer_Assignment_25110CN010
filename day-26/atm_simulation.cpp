#include <iostream>
using namespace std;

int main(){
    int balance,withdrawal,deposit,choice;
    cout<<"enter the balance";
    cin>>balance;

    cout<<"................choose one................."<<endl;
    while(choice!=4){
    cout<<"1 for deposit"<<endl;
    cout<<"2 for withdrawal"<<endl;
    cout<<"3 for check"<<endl;
    cout<<"4 for exit"<<endl;
    cout<<"enter the choice:";
    cin>>choice;

    switch(choice){
        case 1:
            cout<<"the amt to be deposited:";
            cin>>deposit;
            balance+=deposit;
        break;
        case 2:
            cout<<"the amt to be withdrawn:";
            cin>>withdrawal;
            balance-=withdrawal;
        break;
        case 3:
            cout<<balance<<endl;
            break;
        case 4:
        cout<<"thanks for visiting.";
        break;    
    }  }
    return 0;
}