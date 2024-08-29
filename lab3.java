3. Write a program to find the maximum and minimum number between two numbers. Get the
numbers from user.( By C++ or Java )



import java.util.Scanner;

public class MaxMin {
    int num1, num2;

    MaxMin(int n1, int n2) {
        this.num1 = n1;
        this.num2 = n2;
    }

    void findMaxMin() {
        if (num1 > num2) {
            System.out.println("Maximum: " + num1);
            System.out.println("Minimum: " + num2);
        } else {
            System.out.println("Maximum: " + num2);
            System.out.println("Minimum: " + num1);
        }
    }

    public static void main(String[] args) {
        int num1, num2;
        Scanner scanner = new Scanner(System.in);
        System.out.println("Enter the value of num1:");
        num1 = scanner.nextInt();
        System.out.println("Enter the value of num2:");
        num2 = scanner.nextInt();
        MaxMin maxmin = new MaxMin(num1, num2);
        maxmin.findMaxMin();
        scanner.close();
    }
}
