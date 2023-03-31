//Program to find Summation of digits of input number (Recursive)
#include<iostream>
using namespace std;

int sumofdigits(int n)
{
    if (n == 0)
    return 0;
    return (n % 10 + sumofdigits(n/10));    
}

int main()
{
    int num,ans;
    cout << "Enter the number : ";
    cin >> num;
    cout << "Sum of digits in "<< num <<" is "<< sumofdigits(num) << endl;

return 0;
}
