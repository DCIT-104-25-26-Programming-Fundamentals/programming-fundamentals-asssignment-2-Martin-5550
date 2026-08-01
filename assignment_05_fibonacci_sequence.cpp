#include <iostream>
using namespace std;

// Part A: Print the first N Fibonacci terms
void printFibonacci(int n) {
    int first = 0;
    int second = 1;

    cout << "Fibonacci sequence: ";

    for (int i = 0; i < n; i++) {
        cout << first << " ";

        int next = first + second;
        first = second;
        second = next;
    }

    cout << endl;
}

// Part B: Check if a number is a Fibonacci number
bool isFibonacci(int number) {
    if (number < 0) {
        return false;
    }

    int first = 0;
    int second = 1;

    while (first < number) {
        int next = first + second;
        first = second;
        second = next;
    }

    return first == number;
}

// Main function
int main() {
    int n;

    cout << "How many terms? ";
    cin >> n;

    if (n <= 0) {
        cout << "Error: Number of terms must be greater than 0." << endl;
        return 0;
    }

    printFibonacci(n);

    int number;

    cout << "\nEnter a number to check: ";
    cin >> number;

    if (isFibonacci(number)) {
        cout << number << " is a Fibonacci number." << endl;
    } else {
        cout << number << " is NOT a Fibonacci number." << endl;
    }

    return 0;
}
