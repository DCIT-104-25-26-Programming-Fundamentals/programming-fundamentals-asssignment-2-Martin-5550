#include <iostream>
using namespace std;

int calculateSum(int numbers[], int size)
{
    int sum = 0;

    for (int i = 0; i < size; i++)
    {
        sum += numbers[i];
    }

    return sum;
}

double calculateAverage(int numbers[], int size)
{
    int sum = calculateSum(numbers, size);

    return (double)sum / size;
}

int calculateMaximum(int numbers[], int size)
{
    int maximum = numbers[0];

    for (int i = 1; i < size; i++)
    {
        if (numbers[i] > maximum)
        {
            maximum = numbers[i];
        }
    }

    return maximum;
}

int calculateMinimum(int numbers[], int size)
{
    int minimum = numbers[0];

    for (int i = 1; i < size; i++)
    {
        if (numbers[i] < minimum)
        {
            minimum = numbers[i];
        }
    }

    return minimum;
}

int main()
{
    int n;

    cout << "How many numbers? ";
    cin >> n;

    if (n <= 0)
    {
        cout << "Error: Number of values must be positive." << endl;
        return 0;
    }

    int numbers[n];

    for (int i = 0; i < n; i++)
    {
        cout << "Enter number " << i + 1 << ": ";
        cin >> numbers[i];
    }

    int sum = calculateSum(numbers, n);
    double average = calculateAverage(numbers, n);
    int maximum = calculateMaximum(numbers, n);
    int minimum = calculateMinimum(numbers, n);

    cout << "\nResults:" << endl;
    cout << "Sum:     " << sum << endl;
    cout << "Average: " << average << endl;
    cout << "Maximum: " << maximum << endl;
    cout << "Minimum: " << minimum << endl;

    return 0;
}