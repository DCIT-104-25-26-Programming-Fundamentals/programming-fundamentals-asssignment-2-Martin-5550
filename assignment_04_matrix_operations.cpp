#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

const int SIZE = 10;

// Function to input a matrix
void inputMatrix(int matrix[10][10], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << "Enter element [" << i << "][" << j << "]: ";
            cin >> matrix[i][j];
        }
    }
}

// Function to display a matrix
void displayMatrix(int matrix[10][10], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << setw(5) << matrix[i][j];
        }
        cout << endl;
    }
}

// Part A: Transpose a matrix
void transposeMatrix(int matrix[10][10], int rows, int cols) {
    int transpose[10][10];

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            transpose[j][i] = matrix[i][j];
        }
    }

    cout << "\nTransposed Matrix:" << endl;
    displayMatrix(transpose, cols, rows);
}

// Part B: Add two matrices
void addMatrices(int matrix1[10][10], int matrix2[10][10], int rows, int cols) {
    int result[10][10];

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    cout << "\nMatrix Addition Result:" << endl;
    displayMatrix(result, rows, cols);
}

// Part C: Multiply two matrices
void multiplyMatrices(int matrixA[10][10], int matrixB[10][10],
                      int rowsA, int colsA, int colsB) {

    int result[10][10] = {};

    for (int i = 0; i < rowsA; i++) {
        for (int j = 0; j < colsB; j++) {
            for (int k = 0; k < colsA; k++) {
                result[i][j] += matrixA[i][k] * matrixB[k][j];
            }
        }
    }

    cout << "\nMatrix Multiplication Result:" << endl;
    displayMatrix(result, rowsA, colsB);
}

// Main function
int main() {
    int matrix1[10][10];
    int matrix2[10][10];

    int rows, cols;

    // Part A
    cout << "=== PART A: Matrix Transpose ===" << endl;

    cout << "Enter number of rows: ";
    cin >> rows;

    cout << "Enter number of columns: ";
    cin >> cols;

    inputMatrix(matrix1, rows, cols);

    cout << "\nOriginal Matrix:" << endl;
    displayMatrix(matrix1, rows, cols);

    transposeMatrix(matrix1, rows, cols);


    // Part B
    cout << "\n=== PART B: Matrix Addition ===" << endl;

    cout << "Enter number of rows: ";
    cin >> rows;

    cout << "Enter number of columns: ";
    cin >> cols;

    cout << "\nEnter Matrix 1:" << endl;
    inputMatrix(matrix1, rows, cols);

    cout << "\nEnter Matrix 2:" << endl;
    inputMatrix(matrix2, rows, cols);

    addMatrices(matrix1, matrix2, rows, cols);


    // Part C
    cout << "\n=== PART C: Matrix Multiplication ===" << endl;

    int rowsA, colsA, rowsB, colsB;

    cout << "Enter rows of Matrix A: ";
    cin >> rowsA;

    cout << "Enter columns of Matrix A: ";
    cin >> colsA;

    cout << "\nEnter Matrix A:" << endl;
    inputMatrix(matrix1, rowsA, colsA);

    cout << "\nEnter rows of Matrix B: ";
    cin >> rowsB;

    cout << "Enter columns of Matrix B: ";
    cin >> colsB;

    if (colsA != rowsB) {
        cout << "Error: Columns of Matrix A must equal rows of Matrix B." << endl;
        return 0;
    }

    cout << "\nEnter Matrix B:" << endl;
    inputMatrix(matrix2, rowsB, colsB);

    multiplyMatrices(matrix1, matrix2, rowsA, colsA, colsB);

    return 0;
}
