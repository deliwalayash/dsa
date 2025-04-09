#include<iostream>
using namespace std;

void rev(int *, int);

int main() {
    int size, i;

    cout << "Enter size of array: ";
    cin >> size;

    int arr[size];

    for(i = 0; i < size; i++) {
        cout << "Enter element " << i+1 << ": ";
        cin >> arr[i];
    }

    cout << "Original array: ";
    for(i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }

    cout << "\nReversed array: ";
    rev(arr, size);

    return 0;
}

void rev(int *arr, int size) {
    for(int i = size - 1; i >= 0; i--) {
        cout << arr[i] << " ";
    }
}
