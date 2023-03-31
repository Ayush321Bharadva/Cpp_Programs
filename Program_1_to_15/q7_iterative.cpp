// WAP to find a Fibonacci series up to n terms(Iterative)
#include<iostream>
using namespace std;

int main()
{
  int n1 = 0, n2 = 1,n3,n;

  // Taking User input
  cout << "Enter n : ";
  cin >> n;

  // Printing First two numbers
  cout << n1 << " " << n2;

  // Printing Fibonacci Series
  for (int i = 1; i <= n; i++){
    n3 = n1 + n2;
    cout << " " << n3;
    n1 = n2;
    n2 = n3;
  }
    
  return 0;
}
