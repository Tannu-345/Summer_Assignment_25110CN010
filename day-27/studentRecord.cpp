#include <iostream>
#include <vector>
#include <string>

using namespace std;

// OOP Structure: Defining the Student template
class Student {
private: //
    int studentID;
    string name;
    string course;

public:
    // Constructor to initialize a student object
    Student(int id, string n, string c) {
        studentID = id;
        name = n;
        course = c;
    }

    // Getter to access private ID for searching/deleting
    int getID() {
        return studentID;
    }

    // to cleanly print student details
    void displayRecord() {
        cout << "ID: " << studentID << " | Name: " << name << " | Course: " << course << endl;
    }
};

// Main System Logic
int main() {
    vector<Student> record; // Dynamic array to store student objects
    int choice;

    // Menu-driven continuous loop
    while (true) {
        cout << "\n--- Student Record Management System ---\n";
        cout << "1. Add Student Record\n";
        cout << "2. Display All Records\n";
        cout << "3. Search Student by ID\n";
        cout << "4. Delete Student Record\n";
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
                string name, course;
                cout << "Enter Student ID: ";
                cin >> id;
               cin.ignore(); // Clears the newline buffer left by 'cin'
                cout << "Enter Student Name: ";
                getline(cin, name);
                cout << "Enter Course: ";
                getline(cin, course);

                // Create a new Student object and push it into our vector storage
                Student newStudent(id, name, course);
                record.push_back(newStudent);
                cout << "Record added successfully!\n";
                break;
            }
            case 2: { // READ (ALL)
                if (record.empty()) {
                    cout << "No records found.\n";
                    break;
                }
                cout << "\n--- All Student Records ---\n";
                for (int i = 0; i < record.size(); i++) {
                    record[i].displayRecord();
                }
                break;
            }
            case 3: { // READ (SPECIFIC)
                int searchID;
                bool found = false;
                cout << "Enter Student ID to search: ";
                cin >> searchID;

                for (int i = 0; i < record.size(); i++) {
                    if (record[i].getID() == searchID) {
                        cout << "\nRecord Found:\n";
                        record[i].displayRecord();
                        found = true;
                        break;
                    }
                }
                if (!found) cout << "Student with ID " << searchID << " not found.\n";
                break;
            }
            case 4: { // DELETE
                int deleteID;
                bool found = false;
                cout << "Enter Student ID to delete: ";
                cin >> deleteID;

                for (auto it = record.begin(); it != record.end(); ++it) {
                    if (it->getID() == deleteID) {
                        record.erase(it); // Removes the element from the vector
                        cout << "Record deleted successfully!\n";
                        found = true;
                        break;
                    }
                }
                if (!found) cout << "Student with ID " << deleteID << " not found.\n";
                break;
            }
            default:
                cout << "Invalid choice! Please try again.\n";
        }
    }
    return 0;
}