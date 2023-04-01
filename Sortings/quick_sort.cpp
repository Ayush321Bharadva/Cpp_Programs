//quick sort implementation
#include <iostream>
using namespace std;

// function to partition the array into two subarrays
int partition(int arr[], int low, int high) {
    int pivot = arr[high]; // choose the rightmost element as the pivot
    int i = low - 1; // index of smaller element

    for (int j = low; j <= high - 1; j++) {
        // if the current element is smaller than or equal to the pivot
        if (arr[j] <= pivot) {
            i++; // increment index of smaller element
            swap(arr[i], arr[j]); // swap arr[i] and arr[j]
        }
    }

    swap(arr[i + 1], arr[high]); // swap arr[i+1] and arr[high], the pivot
    return i + 1; // return the partition index
}

// function to perform quicksort on an array
void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high); // partition index
        quickSort(arr, low, pi - 1); // recursively sort the left subarray
        quickSort(arr, pi + 1, high); // recursively sort the right subarray
    }
}

// function to print an array
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// main function
int main() {
    int arr[] = {23, 79, 53, 32, 99, 82, 10};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Original array: ";
    printArray(arr, n);

    quickSort(arr, 0, n - 1);

    cout << "Sorted array: ";
    printArray(arr, n);

    return 0;
}


