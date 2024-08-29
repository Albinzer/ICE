10. Write a program that takes marks in individual subjects from the user and calculate the GPA.
( By C++ or Java )



import java.util.Scanner;

class GPACalculator {

    public float calculateGPA(int[] marks, int numSubjects) {
        float total = 0;
        for (int mark : marks) {
            total += mark;
        }
        return total / numSubjects / 10.0f; // Assuming the GPA scale is out of 10
    }
}

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter the number of subjects: ");
        int numSubjects = sc.nextInt();

        int[] marks = new int[numSubjects];
        for (int i = 0; i < numSubjects; i++) {
            System.out.print("Enter marks for subject " + (i + 1) + ": ");
            marks[i] = sc.nextInt();
        }

        GPACalculator gpaCalculator = new GPACalculator();
        float gpa = gpaCalculator.calculateGPA(marks, numSubjects);

        System.out.println("Your GPA is: " + gpa);

        sc.close();
    }
}
