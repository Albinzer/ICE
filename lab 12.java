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
