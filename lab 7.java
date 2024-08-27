import java.util.Scanner;

class Student {
    String name;
    int rollNumber;
    float marks;

    void inputDetails() {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter student name: ");
        name = sc.nextLine();
        System.out.print("Enter roll number: ");
        rollNumber = sc.nextInt();
        System.out.print("Enter marks: ");
        marks = sc.nextFloat();
    }

    void displayDetails() {
        System.out.println("\nStudent Details:");
        System.out.println("Name: " + name);
        System.out.println("Roll Number: " + rollNumber);
        System.out.println("Marks: " + marks);
    }
}

public class Main {
    public static void main(String[] args) {
        Student student = new Student();
        student.inputDetails();
        student.displayDetails();
    }
}
