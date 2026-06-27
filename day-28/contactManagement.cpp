#include <iostream>
#include <vector>
#include <string>

using namespace std;

// OOP Structure: Defining the contact template
class contactRec {  
private:         
    int contactNo;
    string name;
    string add;

public:         ///(access specifier):can be accessed from outside the class block
    // Constructor to initialize a employee object
    contactRec(int no, string n, string a) {
        contactNo = no;
        name = n;
        add = a;
    }

    // Getter to access private ID for searching/deleting
    int getID() {
        return contactNo;
    }

    
    void displayRecord() {
        cout << "contact no: " << contactNo << " | Name: " << name << " | address: " << add << endl;
    }
};

// Main System Logic
int main() {
    vector<contactRec> record; // Dynamic array to store contacts objects
    int choice;

    // Menu-driven continuous loop
    while (true) {
        cout << "\n--- contact num Management System ---\n";
        cout << "1. Add people Record\n";
        cout << "2. Display All Records\n";
        cout << "3. Search people by number\n";
        cout << "4. Delete people Record\n";
        cout << "5. Exit\n";
        cout << "Enter your choice (1-5): ";
        cin >> choice;

        if (choice == 5) {
            cout << "Exiting the system.\n";
            break;
        }

        switch (choice) {
            case 1: { // CREATE
                int no;
                string name, add;
                cout << "Enter contact no: ";
                cin >> no;
               cin.ignore(); // Clears the newline buffer left by 'cin'
                cout << "Enter Name: ";
                getline(cin, name);
                cout << "Enter address: ";
                getline(cin, add);

                // Create a new Employee object and push it into our vector storage
                contactRec newEmployee(no, name, add);
                record.push_back(newEmployee);
                cout << "Record added successfully!\n";
                break;
            }
            case 2: { // READ (ALL)
                if (record.empty()) {
                    cout << "No records found.\n";
                    break;
                }
                cout << "\n--- All Employee Records ---\n";
                for (int i = 0; i < record.size(); i++) {
                    record[i].displayRecord();
                }
                break;
            }
            case 3: { // READ (SPECIFIC)
                int searchNo;
                bool found = false;
                cout << "Enter contact num to search: ";
                cin >> searchNo;

                for (int i = 0; i < record.size(); i++) {
                    if (record[i].getID() == searchNo) {
                        cout << "\nRecord Found:\n";
                        record[i].displayRecord();
                        found = true;
                        break;
                    }
                }
                if (!found) cout << "Employee with ID " << searchNo << " not found.\n";
                break;
            }
            case 4: { // DELETE
                int deleteno;
                bool found = false;
                cout << "Enter contact num to delete: ";
                cin >> deleteno;

                for (auto it = record.begin(); it != record.end(); ++it) {
                    if (it->getID() == deleteno) {
                        record.erase(it); // Removes the element from the vector
                        cout << "Record deleted successfully!\n";
                        found = true;
                        break;
                    }
                }
                if (!found) cout << "people with num: " << deleteno << " not found.\n";
                break;
            }
            default:
                cout << "Invalid choice! Please try again.\n";
        }
    }
    return 0;
}