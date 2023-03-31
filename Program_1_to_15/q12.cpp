/*WAP to find Max, Min, Average of n numbers, n should be taken from user and all n value
should be taken from user (Note that you are not allowed to use an array for this)*/

#include<iostream>
using namespace std;

int main()
{
    int n,val,min,max=0,avg,sum=0;
    cout << "Enter Number of Values:";
    cin >> n;

    cout << "Enter " << n << " Values:\n";
    
    for (int i = 0; i < n; i++)
    {
        cin >> val;

        if (min == NULL)
        {
            cout << "1";
            min = val;
        }

        if (min < val)
            min = val;
        else if (max > val)
            max = val;
            
    }
    

    cout << min << "\n";
    cout << max;
    
  return 0;
}

