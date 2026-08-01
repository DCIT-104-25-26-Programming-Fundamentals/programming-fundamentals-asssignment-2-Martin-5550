#include <iostream>
using namespace std;

// Part A: Print multiplication table for a single number
void printTable(int number) {
    cout << "\nMultiplication Table for " << number << ":" << endl;

    for (int i = 1; i <= 12; i++) {
        cout << number << " x " << i << " = " << number * i << endl;
    }
}

// Part B: Print multiplication tables from 1 to N
void printTablesUpTo(int n) {
    for (int i = 1; i <= n; i++) {
        printTable(i);

        if (i < n) {
            cout << "---------------------------" << endl;
        }
    }
}

// Main function
int main() {
    int number;

    // Part A
    cout << "Enter a number: ";
    cin >> number;

    if (number <= 0) {
        cout << "Error: Number must be greater than 0." << endl;
        return 0;
    }

    printTable(number);


    // Part B
    int n;

    cout << "\nEnter a number N: ";
    cin >> n;

    if (n <= 0) {
        cout << "Error: Number must be greater than 0." << endl;
        return 0;
    }

    printTablesUpTo(n);

    return 0;
}
