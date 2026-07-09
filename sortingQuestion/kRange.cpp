//given an array , arr[] containing n integers , the task is to find an integer (say k) such that after replacing each and every index of an array by |ai-k| where i belong to [1 to n], result is  sorted array. If no such integer exits that satisfies above condition then return -1.Find the Range
#include<iostream>
#include<algorithm>
#include<climits>
using namespace std;

int main()
{
    int arr[] = {5 , 3, 10 ,3};
    int n = sizeof(arr)/sizeof(arr[0]);

    double Kmin = double(INT_MIN);
    double Kmax = double(INT_MAX);

    bool possible = true;

    for(int i=0;i<n-1;i++)
    {
        double mid = (arr[i] + arr[i+1]) / 2.0;

        if(arr[i] < arr[i+1])
        {
            Kmax = min(Kmax, mid);
        }
        else if(arr[i] > arr[i+1])
        {
            Kmin = max(Kmin, mid);
        }

        if(Kmin > Kmax)
        {
            possible = false;
            break;
        }
    }

    if(possible == false)
    {
        cout << -1;
    }
    else if(Kmin==Kmax){
        if(Kmin - (int)Kmin==0){
            cout << "There is only one value: " << Kmin ;
        } else cout << -1;
    }
    else
    {
        if(Kmin - (int)Kmin > 0){
            Kmin = (int)Kmin + 1;
        }
        cout << "Range of K : [" << Kmin << ", " << (int)Kmax << "]";
    }

    return 0;
}