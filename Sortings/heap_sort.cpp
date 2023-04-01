// heap sort implementation
#include <iostream>
using namespace std;

// heapify a subtree rooted at index i in the array of size n
void heapify(int arr[], int n, int i) {
    int largest = i;   // initialize the root as the largest element
    int left = 2*i + 1;   // index of the left child
    int right = 2*i + 2;   // index of the right child

    // if the left child is larger than the root
    if (left < n && arr[left] > arr[largest]) {
        largest = left;
    }

    // if the right child is larger than the largest so far
    if (right < n && arr[right] > arr[largest]) {
        largest = right;
    }

    // if the largest is not the root
    if (largest != i) {
        swap(arr[i], arr[largest]);
        heapify(arr, n, largest);
    }
}

// heap sort function
void heapSort(int arr[], int n) {
    // build a heap (rearrange the array)
    for (int i = n/2 - 1; i >= 0; i--) {
        heapify(arr, n, i);
    }

    // extract elements from the heap one by one
    for (int i = n-1; i >= 0; i--) {
        swap(arr[0], arr[i]);
        heapify(arr, i, 0);
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
    int arr[] = {5, 3, 2, 8, 6, 4, 1, 9, 7, 15, 13, 37, 23};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Original array: ";
    printArray(arr, n);

    heapSort(arr, n);

    cout << "Sorted array: ";
    printArray(arr, n);

    return 0;
}
