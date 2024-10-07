#include <iostream>
#include <iomanip>

using namespace std;

void genArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << "Element " << i + 1 << ": ";
        cin >> arr[i];
    }
}

void Print(const int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << setw(5) << arr[i];
    }
    cout << endl;
}

int findMax(const int arr[], int size) {
    int max = arr[0];

    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    return max;
}

int main() {
    int size;

    cout << "Size of Array: ";
    cin >> size;

    int* arr = new int[size];

    genArray(arr, size);

    cout << "FirstArray: ";
    Print(arr, size);

    int max = findMax(arr, size);
    cout << "MAX: " << max << endl;

    delete[] arr;

    return 0;
}
