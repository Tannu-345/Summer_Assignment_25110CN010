#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Student {
private: 
    int studentID;
    string name;
    double totalMarks, percentage;

public:
    // Constructor to initialize a student object
    Student(int id, string n,double m,double p) {
        studentID = id;
        name = n;
        totalMarks=m;
        percentage=p;
    }

    // Getter to access private ID for searching/deleting
    int getID() {
        return studentID;
    }

    // to cleanly print student details
    void displayRecord() {
        cout << "ID: " << studentID << " | Name: " << name << " | total marks: " <<totalMarks <<" |percentage:"<<percentage<<endl;
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
                string name;
                double marks[5],totalMarks=0, percentage;
                cout << "Enter Student ID: ";
                cin >> id;
               cin.ignore(); // Clears the newline buffer left by 'cin'
                cout << "Enter Student Name: ";
                getline(cin, name);
                cout << "Enter marks: ";

                for(int i=0;i<5;i++){
                    cin>>marks[i];
                    totalMarks+=marks[i];
                    percentage=(totalMarks/500)*100;
                }

                // Create a new Student object and push it into our vector storage
                Student newStudent(id, name, totalMarks, percentage);
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