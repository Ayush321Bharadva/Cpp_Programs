#include <iostream>
using namespace std;

int main() {
    int n, pos, elem;
    cout << "Enter the size of array: ";
    cin >> n;
    
    int arr[n];
    cout << "Enter the elements of array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    cout << "Enter the element to be inserted: ";
    cin >> elem;
    cout << "Enter the position to insert the element: ";
    cin >> pos;
    
    // shift elements to the right to make space for the new element
    for (int i = n - 1; i >= pos; i--) {
        arr[i + 1] = arr[i];
    }
    
    // insert the new element at the given position
    arr[pos] = elem;
    n++; // increase the size of the array
    
    // print the updated array
    cout << "Updated array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    
    return 0;
}
