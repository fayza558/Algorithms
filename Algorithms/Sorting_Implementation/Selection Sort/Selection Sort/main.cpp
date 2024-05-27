#include <iostream>
using namespace std;

void selectionSort(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        int minn = i;
        for (int j = i + 1; j < size; j++) {
            if (arr[j] < arr[minn]) {
                minn = j;
            }
        }
        // Swap the found minimum element with the first element
        int temp = arr[i];
        arr[i] = arr[minn];
        arr[minn] = temp;
    }
}

int main() {
    int size;

    cout << "Enter the number of elements: ";
    cin >> size;

    if (size <= 0) {
        cout << "Invalid size." << endl;
        return 1;
    }

    // Allocate memory dynamically
    int* arr = new int[size];

    cout << "Enter " << size << " elements:" << endl;
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    selectionSort(arr, size);

    cout << "Sorted array:" << endl;
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Deallocate memory
    delete[] arr;

    return 0;
}


