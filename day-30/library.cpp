#include <iostream>
#include <vector>
#include <string>
using namespace std;

class book{
    private:
    int book_id;
    string book_name;

    public:
    book(int id, string bn){
    book_id=id;
    book_name=bn;
    }
// we need file to add details of our books.
    int getid(){
        return book_id;
    }
};

class library{
    private:
    int stu_id;
    string stu_name;
    int stu_class;
    string book_name;

    public:
    library(int id, string n, int c,string bn){
        stu_id=id;
        stu_name=n;
        stu_class=c;
        book_name=bn;
    }
    
    int getId(){
        return stu_id;
    }

    void displayRecord(){
        cout << "ID: " << stu_id<< " | Name: " << stu_name << " | class: " << stu_class <<"| book name:"<<book_name<< endl;

    }
};

int main(){
    vector<library>rec;
    int choice;

     // Menu-driven continuous loop
    while (true) {
        cout << "\n--- Student Record Management System ---\n";
        cout << "1. Add Student Record\n";
        cout << "2. Display All Records\n";
        cout << "3. Search Student by ID\n";
        cout << "4. Delete Student Record when book is returned\n";
        cout << "5. Exit\n";
        cout << "Enter your choice (1-5): ";
        cin >> choice;

        if (choice == 5) {
            cout << "Exiting the system.\n";
            break;
        }

        switch (choice) {
            case 1: { // CREATE
                int id,Id,Class;
                string name, book;
                cout << "Enter Student ID: ";
                cin >> id;
                 cout << "Enter book ID: ";
                cin >> Id;
               cin.ignore(); // Clears the newline buffer left by 'cin'
                cout << "Enter Student Name: ";
                getline(cin, name);
                cout << "Enter book Name: ";
                getline(cin, book);
                cout << "Enter Class: ";
               cin>> Class;

                // Create a new Student object and push it into our vector storage
                library newStudent(Id, name, Class,book);
                rec.push_back(newStudent);
                cout << "Record added successfully!\n";
                break;
            }
            case 2: { // READ (ALL)
                if (rec.empty()) {
                    cout << "No records found.\n";
                    break;
                }
                cout << "\n--- All Student Records ---\n";
                for (int i = 0; i < rec.size(); i++) {
                    rec[i].displayRecord();
                }
                break;
            }
            case 3: { // READ (SPECIFIC)
                int searchID;
                bool found = false;
                cout << "Enter Student ID to search: ";
                cin >> searchID;

                for (int i = 0; i < rec.size(); i++) {
                    if (rec[i].getId() == searchID) {
                        cout << "\nRecord Found:\n";
                        rec[i].displayRecord();
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

                for (auto it = rec.begin(); it != rec.end(); ++it) {
                    if (it->getId() == deleteID) {
                        rec.erase(it); // Removes the element from the vector
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


