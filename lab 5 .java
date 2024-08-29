5. Write a program that takes two matrix and finds the sum of them.( By C++ or Java )


import java.util.Scanner;

public class MatrixSum {

    public static void inputMatrix(int[][] matrix, int rows, int cols, Scanner sc) {
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                System.out.print("Enter element [" + (i + 1) + "][" + (j + 1) + "]: ");
                matrix[i][j] = sc.nextInt();
            }
        }
    }

    public static void addMatrices(int[][] matrix1, int[][] matrix2, int[][] result, int rows, int cols) {
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                result[i][j] = matrix1[i][j] + matrix2[i][j];
            }
        }
    }

    public static void printMatrix(int[][] matrix, int rows, int cols) {
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                System.out.print(matrix[i][j] + " ");
            }
            System.out.println();
        }
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter the number of rows: ");
        int rows = sc.nextInt();
        System.out.print("Enter the number of columns: ");
        int cols = sc.nextInt();

        int[][] matrix1 = new int[rows][cols];
        int[][] matrix2 = new int[rows][cols];
        int[][] result = new int[rows][cols];

        System.out.println("Enter elements of the first matrix:");
        inputMatrix(matrix1, rows, cols, sc);

        System.out.println("Enter elements of the second matrix:");
        inputMatrix(matrix2, rows, cols, sc);

        addMatrices(matrix1, matrix2, result, rows, cols);

        System.out.println("Sum of the matrices:");
        printMatrix(result, rows, cols);

        sc.close();
    }
}
