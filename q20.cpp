#include <iostream>
using namespace std;

int power(int base, int expo)
{

	int result = 1;
	int count = 0;

	for (int i = 0; i < expo; i++)
	{
		int temp = result;
		for (int j = 1; j < base; j++)
		{
			result += temp;
			count++;
		}
	}
	// cout << "Loop count: "<< count;
	return result;
}

int main()
{
	int base, expo;
	cout << "Enter the base: ";
	cin >> base;
	cout << "Enter the exponent: ";
	cin >> expo;
	cout << base << "^" << expo << " = " << power(base, expo) << endl;
	return 0;
}
