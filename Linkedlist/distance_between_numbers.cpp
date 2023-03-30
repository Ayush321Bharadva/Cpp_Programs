#include <iostream>
using namespace std;

int main() {
    int num1, num2, bit_diff = 0;
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;
    
    // compute the distance between the numbers in binary
    int xor_result = num1 ^ num2;
    while (xor_result > 0) {
        bit_diff += (xor_result & 1);
        xor_result >>= 1;
    }
    
    // print the result
    cout << "The distance between " << num1 << " and " << num2 << " is " << bit_diff << " bits" << endl;
    
    return 0;
}
