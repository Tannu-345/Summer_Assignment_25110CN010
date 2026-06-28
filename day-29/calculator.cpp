#include <iostream>
#include <vector>
#include <string>
using namespace std;



// Main System Logic
int main() { 
     double num1;
     double num2;
    double ans;
    int choice;

    // Menu-driven continuous loop
    while (true) {
        cout << "\n---calculator ---\n";
        cout << "1. Add \n";
        cout << "2. subtact\n";
        cout << "3. multiply\n";
        cout << "4. Divide\n";
        cout << "5. percentage\n";
        cout << "6. Exit\n";
        cout << "Enter your choice (1-6): ";
        cin >> choice;

        if (choice == 6) {
            cout << "Exiting the system.\n";
            break;
        }

        switch (choice) {
            case 1: { // ADD
               
                cout << "Enter num1: ";
                cin >> num1;
                 cout << "Enter num2: ";
                cin >> num2;
               cin.ignore(); // Clears the newline buffer left by 'cin'
                cout << "the sum is: "<<num1+num2<<endl;
                break;
            }
            case 2: { // SUBTRACT
                cout << "Enter num1: ";
                cin >> num1;
                 cout << "Enter num2: ";
                cin >> num2;
               cin.ignore(); // Clears the newline buffer left by 'cin'

               if(num1>=num2){
                cout << "the sub is: "<<num1-num2<<endl;
            }else { cout << "the sub is: "<<num2-num1<<endl;}
                break;
            }
            case 3: { // MULTIPLY
                cout << "Enter num1: ";
                cin >> num1;
                 cout << "Enter num2: ";
                cin >> num2;
               cin.ignore(); // Clears the newline buffer left by 'cin'
                cout << "the multiply is: "<<num1*num2<<endl;
                        break;
                    }

            case 4: { // DIVIDE
                 cout << "Enter num1: ";
                cin >> num1;
                 cout << "Enter num2: ";
                cin >> num2;
               cin.ignore(); // Clears the newline buffer left by 'cin'

               if(num2!=0){
                cout << "the quotient is: "<<num1/num2<<endl;
            }else { cout << "not defined" ;  
            } break;
        }

            case 5:{ // percentage
               cout << "Enter obtained num: ";
                cin >> num1;
                 cout << "Enter total num: ";
                cin >> num2;
               cin.ignore(); // Clears the newline buffer left by 'cin'

               if(num2!=0){
                cout << "the percentage is: "<<(num1/num2)*100<<endl;
            }else  
            cout << "not defined" ;
         } break;
         
            default:
                cout << "Invalid choice! Please try again.\n";
        }
    }
    return 0;
}