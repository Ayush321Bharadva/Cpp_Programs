#include <iostream>
#include <algorithm>
using namespace std;

int countPairs(int arr[], int N, int K) {
    sort(arr, arr + N);
    int l = 0, r = N - 1;
    int count = 0;
    while (l < r) {
        if (arr[l] + arr[r] == K) {
            count++;
            l++;
            r--;
        }
        else if (arr[l] + arr[r] < K) {
            l++;
        }
        else {
            r--;
        }
    }
    return count;
}

int main() {
    int N = 4, K = 6;
    int arr[] = {1, 5, 7, 1};
    // int result = countPairs(arr, N, K);
    // cout << result << endl;
    sort(arr,arr+N);
    for (int i = 0; i < N; i++)
    {
        cout << arr[i] <<"|";
    }
    
    return 0;
}
