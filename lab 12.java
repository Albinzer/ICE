12. Write a program creating a super-class with variable “name” and “age”, and a method
display();and create a subclass with variable “salary”.Now inherit the subclass to print the name,salary and age. ( By C++ or Java ) (From applet):


class Person {
    String name;
    int age;

    Person(String n, int a) {
        name = n;
        age = a;
    }

    void display() {
        System.out.println("Name: " + name + ", Age: " + age);
    }
}

class Employee extends Person {
    double salary;

    Employee(String n, int a, double s) {
        super(n, a);
        salary = s;
    }

    void display() {
        super.display();
        System.out.println("Salary: $" + salary);
    }
}

public class Main {
    public static void main(String[] args) {
        Employee emp = new Employee("Alice", 30, 50000.0);
        emp.display();
    }
}
