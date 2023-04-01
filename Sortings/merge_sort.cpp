//merge sort implementation
#include <iostream>
using namespace std;

// function to merge two sorted subarrays
void merge(int arr[], int left, int mid, int right) {
    int n1 = mid - left + 1;
    int n2 = right - mid;

    // create temporary arrays
    int L[n1], R[n2];

    // copy data to temporary arrays
    for (int i = 0; i < n1; i++) {
        L[i] = arr[left + i];
    }
    for (int j = 0; j < n2; j++) {
        R[j] = arr[mid + 1 + j];
    }

    // merge the temporary arrays back into arr
    int i = 0, j = 0, k = left;
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    // copy the remaining elements of L[] to arr[]
    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }

    // copy the remaining elements of R[] to arr[]
    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}

// function to perform merge sort on an array
void mergeSort(int arr[], int left, int right) {
    if (left < right) {
        int mid = left + (right - left) / 2; // find the middle index
        mergeSort(arr, left, mid); // recursively sort the left subarray
        mergeSort(arr, mid + 1, right); // recursively sort the right subarray
        merge(arr, left, mid, right); // merge the sorted subarrays
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
    int arr[] = {38, 27, 43, 37, 93, 82, 10};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Original array: ";
    printArray(arr, n);

    mergeSort(arr, 0, n - 1);

    cout << "Sorted array: ";
    printArray(arr, n);

    return 0;
}


