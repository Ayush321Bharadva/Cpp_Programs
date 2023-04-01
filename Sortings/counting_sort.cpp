// counting sort implementation
#include <iostream>
using namespace std;

void countingSort(int arr[], int n, int k) {
    int count[k+1] = {0};
    int output[n];

    // count the frequency of each element
    for (int i = 0; i < n; i++) {
        count[arr[i]]++;
    }

    // calculate the cumulative sum
    for (int i = 1; i <= k; i++) {
        count[i] += count[i-1];
    }

    // place the elements in the output array
    for (int i = n-1; i >= 0; i--) {
        output[count[arr[i]]-1] = arr[i];
        count[arr[i]]--;
    }

    // copy the sorted array back to the input array
    for (int i = 0; i < n; i++) {
        arr[i] = output[i];
    }
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[] = {5, 3, 2, 8, 6, 4, 1, 9, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 9;  // maximum element in the array

    cout << "Original array: ";
    printArray(arr, n);

    countingSort(arr, n, k);

    cout << "Sorted array: ";
    printArray(arr, n);

    return 0;
}
