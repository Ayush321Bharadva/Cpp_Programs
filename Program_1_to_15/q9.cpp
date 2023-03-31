// Program to find whether a number is Odd or Even without using a % operator.
#include<iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter Number : ";
    cin >> n;

    // Using bitwise AND operator to check number is even or odd
    if ( (n & 1) == 0){
        cout << "even";
    }
    else{
        cout << "odd";
    }
    
  return 0;
}
