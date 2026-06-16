// Find the last occurrence of x in the array
#include <iostream>

using namespace std;
int main()
{
    
    int arr[] = {1, 2, 4, 6, 3, 7, 1};
    for (int i = 6; i >= 0; i--)
    {
        // cout << arr[i] << " ";
        if (arr[i] == 1)
        {
            cout << i;
            break;
        }
    }
}