7. Write a program to display student details using class.( By C++ or Java )


#include <iostream>
using namespace std;

class Student {
public:
    string name;
    int rollNumber;
    float marks;

    void inputDetails() {
        cout << "Enter student name: ";
        getline(cin, name);
        cout << "Enter roll number: ";
        cin >> rollNumber;
        cout << "Enter marks: ";
        cin >> marks;
    }

    void displayDetails() {
        cout << "\nStudent Details:\n";
        cout << "Name: " << name << endl;
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main() {
    Student student;
    cin.ignore();
    student.inputDetails();
    student.displayDetails();
    return 0;
}
