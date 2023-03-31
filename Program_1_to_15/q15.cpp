// WAP to convert a Decimal number to BCD.
//bitset<> is used for this..
#include<iostream>
#include<bitset>
using namespace std;

void bcdConverter(int n){

    //if (n == 0)
    if (n == 0)
    {
        cout << "0000";
        return ; 
    }
    //Step 1 : reverse n
    int rev = 0;

    //reversing n
    while (n > 0)
    {
        rev = rev*10 + n%10;
        n /= 10;
    }
    
    //step 2 : print the binary form of rev using "bitset"(bitset index starts from right, and due to this n is reversed)
    while (rev > 0)
    {
        //Extracting last number of rev and its 4 bit binary form
        bitset<4> bits(rev%10);

        //printing bits
        cout << bits << " " ;

        //dividing by 10 for next digit
        rev /= 10;    
    }
    

}

int main()
{
    int n;
    cout << "Enter number to find its BCD value : ";
    cin >> n;
    cout << "BCD of " << n << " is : ";
    bcdConverter(n);
    return 0;
}
