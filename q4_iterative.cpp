// Find the factorial of given number
#include<iostream>
using namespace std;

int main()
{
    int n,fact=1;
    cout << "Enter Number : ";
    cin >> n;

    
    if (n==1 || n==0)
        fact = 1;
    else{
        for (int i = 1; i <= n; i++)
        {
            fact = fact * i;
        }
    
        
    cout << "Factorial = " << fact;
    return 0;
}
