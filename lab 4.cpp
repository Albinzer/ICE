#include <iostream>
#include <algorithm>
using namespace std;

void sortAscending(int arr[], int n) {
    sort(arr, arr + n);
}

void sortDescending(int arr[], int n) {
    sort(arr, arr + n, greater<int>());
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main() {
    int arr[] = {5, 3, 8, 1, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Original array: ";
    printArray(arr, n);

    sortAscending(arr, n);
    cout << "Array in ascending order: ";
    printArray(arr, n);

    sortDescending(arr, n);
    cout << "Array in descending order: ";
    printArray(arr, n);

    return 0;
}
