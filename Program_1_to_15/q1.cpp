// Program to find the sum of all even numbers in an 1D-array
#include<iostream>
using namespace std;

int sumeven(int arr[],int n){
    int sum=0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i]%2==0)
            sum = sum + arr[i];        
    }
    return sum;
}


int main()
{
    int n;
    cout << "Enter Size of array :";
    cin >> n;
    int arr[n],sum=0;

    for (int i = 0; i < n; i++)
    {
        cout << "Enter element at index "<< i << ":" ;
        cin >> arr[i];
    }
    cout << "Sum = " << sumeven(arr,n);
  return 0;
}
