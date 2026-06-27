#include <iostream>
#include <vector>
#include <string>

using namespace std;

// OOP Structure: Defining the employee template
class costumer {  ///class(keyword): to declare user defined data type(Employee)
private:         ///(access specifier):restricts visibility
    int costumerID;
    string name;
    double balance;

public:         ///(access specifier):can be accessed from outside the class block
    // Constructor to initialize a employee object
    costumer(int id, string n, double b) {
        costumerID = id;
        name = n;
        balance = b;
    }

    // Getter to access private ID for searching/deleting
    int getID() {
        return costumerID;
    }

    // to cleanly print student details
    void displayRecord() {
        cout << "ID: " << costumerID << " | Name: " << name << " | balance: " << balance << endl;
    }
};

// Main System Logic
int main() {
    vector<costumer> record; // Dynamic array to store Employee objects
    int choice;
     int id;
     double balance;
    string name;

    // Menu-driven continuous loop
    while (true) {
        cout << "\n---Bank Account Management System ---\n";
        cout << "1. Add costumer Record\n";
        cout << "2. Display All Records\n";
        cout << "3. Search costumer by ID\n";
        cout << "4. Delete costumer Record\n";
        cout << "5. credit\n";
        cout << "6. debit\n";
        cout << "7. Exit\n";
        cout << "Enter your choice (1-7): ";
        cin >> choice;

        if (choice == 7) {
            cout << "Exiting the system.\n";
            break;
        }

        switch (choice) {
            case 1: { // CREATE
               
                cout << "Enter costumer ID: ";
                cin >> id;
               cin.ignore(); // Clears the newline buffer left by 'cin'
                cout << "Enter Employee Name: ";
                getline(cin, name);
                cout << "Enter balance: ";
                cin>>balance;

                // Create a new Employee object and push it into our vector storage
                costumer newEmployee(id, name, balance);
                record.push_back(newEmployee);
                cout << "Record added successfully!\n";
                break;
            }
            case 2: { // READ (ALL)
                if (record.empty()) {
                    cout << "No records found.\n";
                    break;
                }
                cout << "\n--- All costumer Records ---\n";
                for (int i = 0; i < record.size(); i++) {
                    record[i].displayRecord();
                }
                break;
            }
            case 3: { // READ (SPECIFIC)
                int searchID;
                bool found = false;
                cout << "Enter costumer ID to search: ";
                cin >> searchID;

                for (int i = 0; i < record.size(); i++) {
                    if (record[i].getID() == searchID) {
                        cout << "\nRecord Found:\n";
                        record[i].displayRecord();
                        found = true;
                        break;
                    }
                }
                if (!found) cout << "costumer with ID " << searchID << " not found.\n";
                break;
            }
            case 4: { // DELETE
                int deleteID;
                bool found = false;
                cout << "Enter costumer ID to delete: ";
                cin >> deleteID;

                for (auto it = record.begin(); it != record.end(); ++it) {
                    if (it->getID() == deleteID) {
                        record.erase(it); // Removes the element from the vector
                        cout << "Record deleted successfully!\n";
                        found = true;
                        break;
                    }
                }
                if (!found) cout << "costumer with ID " << deleteID << " not found.\n";
                break;
            }

            case 5:{
               double deposit;
             cout<<"the amt to be deposited:"<<endl;
            cin>>deposit;
            balance+=deposit;
            cout<<"deposition done."<<"balance now:"<<balance<<endl;
            }

            case 6: {
                 double withdrawal;
                 cout<<"the amt to be withdrawn:"<<endl;
            cin>>withdrawal;
            balance-=withdrawal;
            cout<<balance;
            }
            default:
                cout << "Invalid choice! Please try again.\n";
        }
    }
    return 0;
}