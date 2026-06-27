#include <iostream>
#include <vector>
#include <string>
using namespace std;

class costumer {  
private:         
    int costumerID;
    string name;
    string from, to;
    float date;

public:         
    costumer(int id, string n, string f, string t, float d) {
        costumerID = id;
        name = n;
        from=f;
        to=t;
        date=d;
    }

    // Getter to access private ID for searching/deleting
    int getID() {
        return costumerID;
    }

    
    void displayRecord() {
        cout << "ID: " << costumerID << " | Name: " << name << " | from: " << from<<" to "<<to<<"| on:"<<date << endl;
    }
};

// Main System Logic
int main() {
    vector<costumer> record; 
    int choice;
    int id;
    string from, to;
    float date;
    string name;

    // Menu-driven continuous loop
    while (true) {
        cout << "\n---Ticket Booking Management System ---\n";
        cout << "1. Add costumer Record and booking\n";
        cout << "2. Display All Records\n";
        cout << "3. Search costumer by ID\n";
        cout << "4. Delete costumer Record\n";
        cout << "5. exit\n";
        cout << "Enter your choice (1-5): ";
        cin >> choice;

        if (choice == 5) {
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

                cout<<"enter the date:";
                cin>>date;

                cout<<"choose from: motherBoard, capacitor,resistors";
                cin>>from;
                cout<<"choose to: transistor, battery, ram";
                cin>>to;
               
                costumer newEmployee(id, name,from,to ,date);
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

            default:
                cout << "Invalid choice! Please try again.\n";
        }
    }
    return 0;
}