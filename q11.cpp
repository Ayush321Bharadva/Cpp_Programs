// WAP to find weather given number is Armstrong number is not.
/*
An Armstrong number of three digits is an integer such that the sum of the cubes of its digits is equal to the number itself. For example, 371 is an Armstrong number since 3**3 + 7**3 + 1**3 = 371.
*/
#include<iostream>
using namespace std;

int main()

{
    int n, temp = 0, sum = 0, rem;
    cout << "Enter Number : ";
    cin >> n;
    temp = n;

    while (n != 0)
    {
        rem = n % 10;
        sum += (rem*rem*rem);
        n /= 10;
    }
    
    if (temp == sum)
        cout << "Armstrong Number.";
    else
        cout << "Not an armstrong Number.";
    
  return 0;
}
