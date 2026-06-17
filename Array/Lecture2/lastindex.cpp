// Find the last occurrence of x in the array
#include <iostream>

using namespace std;
int main()
{
    int x = 1;
    int arr[] = {1, 2, 4, 6, 3, 7, 1};
    for (int i = 6; i >= 0; i--)
    {
        // cout << arr[i] << " ";
        if (arr[i] == x)
        {
            cout << i;
            break;
        }
    }
}