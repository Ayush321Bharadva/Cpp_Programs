#include <iostream>
#include <string>
using namespace std;

// Function to convert a decimal number to its hexadecimal representation
string decimalToHexadecimal(int decimal)
{
	string hexadecimal = "";
	char hexDigits[] = "0123456789ABCDEF";

	while (decimal > 0)
	{
		int remainder = decimal % 16;
		hexadecimal = hexDigits[remainder] + hexadecimal;
		decimal /= 16;
	}

	return hexadecimal;
}

int main()
{
	int decimal = 479;

	string hexadecimal = decimalToHexadecimal(decimal);

	cout << decimal << " in hexadecimal is " << hexadecimal << hexadecimal;

	return 0;
}
