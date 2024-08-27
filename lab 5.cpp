#include <iostream>
using namespace std;

void inputMatrix(int matrix[100][100], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << "Enter element [" << i + 1 << "][" << j + 1 << "]: ";
            cin >> matrix[i][j];
        }
    }
}

void addMatrices(int matrix1[100][100], int matrix2[100][100], int result[100][100], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
}

void printMatrix(int matrix[100][100], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int rows, cols;
    int matrix1[100][100], matrix2[100][100], result[100][100];

    cout << "Enter the number of rows: ";
    cin >> rows;
    cout << "Enter the number of columns: ";
    cin >> cols;

    cout << "Enter elements of the first matrix:\n";
    inputMatrix(matrix1, rows, cols);

    cout << "Enter elements of the second matrix:\n";
    inputMatrix(matrix2, rows, cols);

    addMatrices(matrix1, matrix2, result, rows, cols);

    cout << "Sum of the matrices:\n";
    printMatrix(result, rows, cols);

    return 0;
}
