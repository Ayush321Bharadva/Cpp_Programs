#include <iostream>
using namespace std; 
int countMegaPrimeNumber(int left, int right) {
    // Write your code here.
    int countMp = 0;
    int digit = 0;

    while(left <= right){

        //check number is prime or not
        bool isPrime = true;    
        cout << "Outer while loop\n";
        for(int i = 2; i<left/2; i++){

            if(left%i == 0){
                //number is not prime
                cout << "inner if of inner for loop\n";
                isPrime = false;
                break;
            }

        }

        //number is prime, so check its digits
        bool isDigitPrime = true;
        if(isPrime){

            cout << "outer if condition\n";
            while(left != 0){
                
                digit = left % 10;
                cout << "2nd inner while loop\n";
                if(digit == 1 || digit == 4 || digit == 6 || digit == 8 || digit == 9){
                    isDigitPrime = false;
                    break;
                }

                left /= 10;

            }
        }

        if(isPrime && isDigitPrime){
            cout << "counter if condition";
            countMp++;
        }
        left++;
    }

    return countMp;

}

int main()
{
    int left = 2;
    int right = 15;
    int count = countMegaPrimeNumber(left, right);
    cout << count;
    return 0;
}
