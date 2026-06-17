#include <iostream>
using namespace std;
int main()
{
    int m;
    cout << "Enter no. of rows: ";
    cin >> m;
    int n;
    cout << "Enter no. of columns: ";
    cin >> n;
    int arr[m][n];

    for (int i = 0; i <= m - 1; i++)
    {
        for (int j = 0; j <= n - 1; j++)
        {
            cin >> arr[i][j] ;
        }
    }

   for (int i = m - 1; i >= 0; i--)
  {
    for (int j = n - 1; j >= 0; j--)
    {
        cout<< arr[i][j] << " ";
    }
    cout << endl;
  }
}