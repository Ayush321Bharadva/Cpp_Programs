// Program to find a total odd and total even digit of a given number.
#include<iostream>
using namespace std;

int main()
{
    int n, odd=0, even=0, rem;
    cout << "Enter Number : ";
    cin >> n;

    while (n>0)
    {
        rem = n % 10;
        if (rem % 2 == 0){
            even++;
        }
        else{
            odd++;
        }
        n /= 10;
    }
    
    cout << "\nEven Digits = " << even;
    cout << "\nOdd Digits = " << odd;
  return 0;
}
