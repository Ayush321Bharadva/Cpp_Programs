// WAP to find a Multiplication of 2 Matrix (dimension and value should be entered by user)
#include<iostream>
using namespace std;

int main()
{
    int a[5][5], b[5][5], ans[5][5], r1, c1, r2, c2;

    //taking input of rows and cols 
    cout << "Enter number of rows and columns for matrix 1 respectively : ";
    cin >> r1 >> c1;
    cout << "Enter number of rows and columns for matrix 2 respectively : ";
    cin >> r2 >> c2;

    //taking input of numbers in matrix 1
    cout << "Enter Values in 1st Matrix:\n";
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            cin >> a[i][j];
        }
        
    }

    //taking input of numbers in matrix 2
    cout << "Enter Values in 2nd Matrix:\n";
    for (int i = 0; i < r2; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            cin >> b[i][j];
        }
        
    }

    //Initialization of ans matrix
    // for (int i = 0; i < r1; i++)
    // {
    //     for (int j = 0; j < c2; j++)
    //     {
            
    //     }
        
    // }
    

    //Multiplication of Matrix
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            ans[i][j] = 0;
            for (int k = 0; k < c1; k++)
            {
                ans[i][j] += a[i][k] * b[k][j];
            }
            
        }
        
    }


    //Display answer matrix
    cout << "Multiplication of matrix is :\n";
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            cout << ans[i][j] << "\t";
                    
            if(j == c2-1)
                cout << endl;
        }

        
    }
    
    
  return 0;
}
