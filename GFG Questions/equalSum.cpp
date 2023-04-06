/*
Given an array A of n positive numbers. The task is to find the first index in the array such that the sum of elements before it is equal to the sum of elements after it.
Note:  Array is 1-based indexed.

Example 1:

Input:
n = 5
A[] = {1,3,5,2,2}
Output: 3
Explanation: For second test case
at position 3 elements before it
(1+3) = elements after it (2+2).
*/

#include <iostream>
#include<vector>
using namespace std;

int equalSum(int N, vector<int> &A)
{

    int sum = 0, leftSum = 0;

    for (int i = 1; i <= N; i++)
    {
        sum += A[i - 1];
    }

    for (int i = 1; i <= N; i++)
    {
        sum -= A[i-1];
        if(leftSum == sum) {
            return i;
        }
        leftSum += A[i-1];
        // if (leftSum == sum - leftSum - A[i - 1])
        // {
        //     return i;
        // }
        // leftSum += A[i - 1];
    }
    return -1;
}
int main()
{
    int N;
    cout << "Enter Size of Array : ";
    cin >> N;
    vector<int> A(N);
    cout << "Enter " << N <<" numbers in Array : ";
    for(int i = 0; i < N; i++) {
        cin >> A[i];
    }
    int ans = equalSum(N, A);
    if(ans != -1) {
        cout << "equalSum index = " << ans << endl;
    }
    else {
        cout << "No such index exists." << endl;
    }
    return 0;
}
