//Program to find Summation of digits of input number (Iterative)
#include<iostream>
using namespace std;

int main()
{
    int n,ans=0;
    cout << "Enter the number : ";
    cin >> n;

    while (n > 0)
    {
        ans = ans + n % 10;
        n /= 10;
    }
    
    cout << "Ans = " << ans ;


  return 0;
}
