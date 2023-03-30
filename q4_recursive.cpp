// Find the factorial of given number
#include<iostream>
using namespace std;
// Recursive approach
int fact(int n){

    if (n==1 || n==0)
        return 1;
    else
        return n*fact(n-1);    
}

int main()
{
    int n;
    cout << "Enter Number : ";
    cin >> n;
        
    cout << "Factorial = " << fact(n);
    return 0;
}
