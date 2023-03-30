// Program to find Factors of Given Number
#include<iostream>
using namespace std;
/* Recursive function */
void factors(int n,int i){

    if (i <= n ){
        if(n % i == 0){
            cout << i << " ";    
        }

        // Call function again for next number
        factors(n , i+1);
    }
}
int main()
{
    int n;
    cout << "Enter the Number : ";
    cin >> n;

    cout << "Factors of are \n" ;
    factors(n , 1);
    
  return 0;
}
