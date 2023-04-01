// radix sort implementation
#include <iostream>
using namespace std;

// function to get the maximum value in an array
int getMax(int arr[], int n) {
    int max = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

// function to perform counting sort on an array based on a given digit
void countSort(int arr[], int n, int exp) {
    int output[n]; // output array
    int count[10] = {0}; // count array

    // count occurrences of each digit
    for (int i = 0; i < n; i++) {
        count[(arr[i] / exp) % 10]++;
    }

    // calculate cumulative count
    for (int i = 1; i < 10; i++) {
        count[i] += count[i - 1];
    }

    // build the output array
    for (int i = n - 1; i >= 0; i--) {
        output[count[(arr[i] / exp) % 10] - 1] = arr[i];
        count[(arr[i] / exp) % 10]--;
    }

    // copy the output array to the original array
    for (int i = 0; i < n; i++) {
        arr[i] = output[i];
    }
}

// function to perform radix sort on an array
void radixSort(int arr[], int n) {
    // get the maximum value in the array
    int max = getMax(arr, n);

    // perform counting sort for each digit, starting from the least significant digit
    for (int exp = 1; max / exp > 0; exp *= 10) {
        countSort(arr, n, exp);
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
    int arr[] = {170, 45, 75, 90, 802, 24, 2, 66};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Original array: ";
    printArray(arr, n);

    radixSort(arr, n);

    cout << "Sorted array: ";
    printArray(arr, n);

    return 0;
}
