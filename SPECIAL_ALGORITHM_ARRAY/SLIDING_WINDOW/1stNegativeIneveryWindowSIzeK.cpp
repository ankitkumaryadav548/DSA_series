//write code to find 1st negative number in every window of sixe k.

//using brute force => 
#include<iostream>
using namespace std;

int main()
{
    int arr[] = {2,-3,4,4,-7,-1,4,-2,6};

    int n = sizeof(arr)/sizeof(arr[0]);
    int k = 3;

    for(int i=0; i<=n-k; i++)
    {
        bool found = false;

        for(int j=i; j<i+k; j++)
        {
            if(arr[j] < 0)
            {
                cout << arr[j] << " ";
                found = true;
                break;
            }
        }

        if(!found)
            cout << 0 << " ";
    }

    return 0;
}