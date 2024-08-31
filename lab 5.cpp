5. Write a program that takes two matrix and finds the sum of them.( By C++ or Java )



#include <iostream>
using namespace std;

class Matrix {
private:
    int rows, cols;
    int matrix[100][100];

public:
    // Constructor
    Matrix(int r, int c) : rows(r), cols(c) {}

    // Input matrix elements
    void inputMatrix() {
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                cout << "Enter element [" << i + 1 << "][" << j + 1 << "]: ";
                cin >> matrix[i][j];
            }
        }
    }

    // Add two matrices
    Matrix add(const Matrix& other) const {
        Matrix result(rows, cols);
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                result.matrix[i][j] = this->matrix[i][j] + other.matrix[i][j];
            }
        }
        return result;
    }

    // Print matrix elements
    void printMatrix() const {
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                cout << matrix[i][j] << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    int rows, cols;

    cout << "Enter the number of rows: ";
    cin >> rows;
    cout << "Enter the number of columns: ";
    cin >> cols;

    Matrix matrix1(rows, cols);
    Matrix matrix2(rows, cols);

    cout << "Enter elements of the first matrix:\n";
    matrix1.inputMatrix();

    cout << "Enter elements of the second matrix:\n";
    matrix2.inputMatrix();

    Matrix result = matrix1.add(matrix2);

    cout << "Sum of the matrices:\n";
    result.printMatrix();

    return 0;
}
