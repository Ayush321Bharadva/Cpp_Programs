// WAP to find a Fibonacci series up to n terms(Recursive)
#include<iostream>
using namespace std;

//Recursive function
int fibonacci(int n){
    
    if (n==0 || n==1)
        return n;
    else
        return (fibonacci(n-1) + fibonacci(n-2));
    
}

int main()
{
    int n,i=0;

    // Taking User input
    cout << "Enter number of terms : ";
    cin >> n;
    
    while (i<n)
    {
        cout << " " << fibonacci(i);
        i++;
    }

  return 0;
}
