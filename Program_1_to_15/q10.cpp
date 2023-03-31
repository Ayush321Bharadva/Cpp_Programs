// WAP to find a prime number between range (range should be entered by user).
#include<iostream>
using namespace std;

int main()
{
    int start, end;
    bool flag;

    cout << "Enter Starting range : ";
    cin >> start;
    cout << "Enter Ending range : ";
    cin >> end;

    for (int i = start; i <= end; i++)   
    {
        //0 and 1 are neither prime nor composite so skip
        if (i == 1 || i == 0)
        {
            continue;
        }
        //flag variable to check i is prime or not
        flag = true;

        for (int j = 2; j <= i/2; j++)
        {
            if (i % j == 0)
            {
                flag = false;
                break;
            }
            
        }
        //flag = true -> prime
        //flag = false -> not prime
        if (flag)
        {
            cout << i << " ";
        }    
    }    
  return 0;
}
