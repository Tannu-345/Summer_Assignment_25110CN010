#include <iostream>
#include <vector>
#include <string>

using namespace std;

class salManage { 
private:         
    int employeeID;
    double basicSalary;

public:      
    salManage(int id, double b) {
        employeeID = id;
       basicSalary=b;
    }

    int getID() {
        return employeeID;
    }

    // to cleanly print student details
    void displayRecord() {
        double tax=basicSalary*0.02;
        cout << "ID: " << employeeID << " | Salary: " << basicSalary-tax << endl;
    }
};

// Main System Logic
int main() {
    vector<salManage> record; // Dynamic array to store Employee objects
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
                double salary,basicSalary;
                cout << "Enter Employee ID: ";
                cin >> id;
               cin.ignore(); // Clears the newline buffer left by 'cin'
                cout << "Enter Employee basic salary: ";
                cin>>basicSalary;

                // Create a new Employee object and push it into our vector storage
                salManage newEmployee(id,basicSalary);
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