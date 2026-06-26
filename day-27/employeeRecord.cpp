#include <iostream>
#include <vector>
#include <string>

using namespace std;

// OOP Structure: Defining the employee template
class Employee {  ///class(keyword): to declare user defined data type(Employee)
private:         ///(access specifier):restricts visibility
    int employeeID;
    string name;
    string work;

public:         ///(access specifier):can be accessed from outside the class block
    // Constructor to initialize a employee object
    Employee(int id, string n, string w) {
        employeeID = id;
        name = n;
        work = w;
    }

    // Getter to access private ID for searching/deleting
    int getID() {
        return employeeID;
    }

    // to cleanly print student details
    void displayRecord() {
        cout << "ID: " << employeeID << " | Name: " << name << " | work: " << work << endl;
    }
};

// Main System Logic
int main() {
    vector<Employee> record; // Dynamic array to store Employee objects
    int choice;

    // Menu-driven continuous loop
    while (true) {
        cout << "\n--- Employee Record Management System ---\n";
        cout << "1. Add Employee Record\n";
        cout << "2. Display All Records\n";
        cout << "3. Search Employee by ID\n";
        cout << "4. Delete Employee Record\n";
        cout << "5. Exit\n";
        cout << "Enter your choice (1-5): ";
        cin >> choice;

        if (choice == 5) {
            cout << "Exiting the system.\n";
            break;
        }

        switch (choice) {
            case 1: { // CREATE
                int id;
                string name, work;
                cout << "Enter Employee ID: ";
                cin >> id;
               cin.ignore(); // Clears the newline buffer left by 'cin'
                cout << "Enter Employee Name: ";
                getline(cin, name);
                cout << "Enter work: ";
                getline(cin, work);

                // Create a new Employee object and push it into our vector storage
                Employee newEmployee(id, name, work);
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
                int searchID;
                bool found = false;
                cout << "Enter Employee ID to search: ";
                cin >> searchID;

                for (int i = 0; i < record.size(); i++) {
                    if (record[i].getID() == searchID) {
                        cout << "\nRecord Found:\n";
                        record[i].displayRecord();
                        found = true;
                        break;
                    }
                }
                if (!found) cout << "Employee with ID " << searchID << " not found.\n";
                break;
            }
            case 4: { // DELETE
                int deleteID;
                bool found = false;
                cout << "Enter Employee ID to delete: ";
                cin >> deleteID;

                for (auto it = record.begin(); it != record.end(); ++it) {
                    if (it->getID() == deleteID) {
                        record.erase(it); // Removes the element from the vector
                        cout << "Record deleted successfully!\n";
                        found = true;
                        break;
                    }
                }
                if (!found) cout << "Employee with ID " << deleteID << " not found.\n";
                break;
            }
            default:
                cout << "Invalid choice! Please try again.\n";
        }
    }
    return 0;
}