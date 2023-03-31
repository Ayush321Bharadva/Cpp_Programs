// Program to check a string is palindrome or not
#include<iostream>
using namespace std;
string isPalindrome(string S)
{
	// Iterate over the range [0, N/2]
	for (int i = 0; i < S.length() / 2; i++) {

		// If S[i] is not equal to S[N-i-1]
		if (S[i] != S[S.length() - i - 1]) {
			// Return No
			return "No";
		}
	}
	// String is Palindrome Return "Yes"
	return "Yes";
}
int main()
{
    string S = "ABCDCBA";
    cout << isPalindrome(S);
  return 0;
}


// #include <bits/stdc++.h>



