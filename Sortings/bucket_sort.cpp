// bucket sort implementation
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
const int N = 100;

void bucketSort(float arr[], int n)
{
  vector<float> b[N];

  for (int i = 0; i < n; i++)
  {
    int bi = n * arr[i];
    b[bi].push_back(arr[i]);
  }

  for (int i = 0; i < n; i++)
  {
    sort(b[i].begin(), b[i].end());
  }

  int index = 0;
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < b[i].size(); j++)
    {
      arr[index++] = b[i][j];
    }
  }
}
// main function
int main()
{
  float arr[] = {13.0, 9.0, 7.0, 51.0, 26.0, 29.0, 73.0, 69.0, 97.0, 83.0, 82.0, 36.0};
  int n = sizeof(arr) / sizeof(arr[0]);

  cout << "Original array: \n";
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }

  bucketSort(arr, n);

  cout << "\nSorted array: \n";
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
  return 0;
}
