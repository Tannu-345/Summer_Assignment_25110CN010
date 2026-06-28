#include <iostream>
#include <algorithm>
using namespace std;

class array{
   private:
   int ar[50];
   int len;

   public:
   array(int a[50], int l){
    ar[50]=a[50];
    len=l;
   }
};

int main(){
    int n, a[50],b[50], l;
    int choice;

    while (true) {
        cout << "\n---Array Operation System ---\n";
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
                cout<<"enter the no of elements:";
                cin>>n;
                cout<<"enter the elements:";
                for(int i=0;i<n;i++){
                    cin>>a[i];
                }
            }break;

            case 2:{
                int count=0;
                 for(int i=0;i<n;i++){
                    count++;
                }
                cout<<"length is :"<<count;
            }break;

            case 3:{// to add an element
                int i,num;
                cout<<"enter the no of elements:";
                cin>>num;
                cout<<"enter the element to be appended:";
                for(int i=0;i<num;i++){
                    cin>>a[n];
                   n++;
                }
                cout<<"final arr is:";
                for(int i=0;i<n;i++){
                    cout<<a[i]<<" ";
                }
            }break;

            case 4:{
                int ele, target=-1;
                cout<<"enter the element to be deleted:";
                cin>>ele;
                 for(int i=0;i<n;i++){
                    if(a[i]==ele){
                        target=i;
                        break; //1st occurence
                    }
                    if(target!=-1){
                   for(int i=target; i<n-1;i++){
                    a[i]=a[i+1];
                   }
                   n--;
                }
                 cout<<"after deletion arr is:";
                for(int i=0;i<n;i++){
                    cout<<a[i]<<" ";
                }}
            }break;
        }
}
return 0;}