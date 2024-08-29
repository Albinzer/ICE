#include <iostream>
using namespace std;

class Person {
public:
    string name;
    int age;

    Person(string n, int a) : name(n), age(a) {}

    void display() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

class Employee : public Person {
public:
    double salary;

    Employee(string n, int a, double s) : Person(n, a), salary(s) {}

    void display() {
        Person::display();
        cout << "Salary: $" << salary << endl;
    }
};

int main() {
    Employee emp("Alice", 30, 50000.0);
    emp.display();

    return 0;
}