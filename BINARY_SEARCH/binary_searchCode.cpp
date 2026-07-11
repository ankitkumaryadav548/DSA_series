#include <iostream>
using namespace std;

int main() {
    int arr[] = {2, 5, 8, 12, 16, 23, 38, 56, 72};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 23;

    int low = 0;
    int high = n - 1;
    int mid;
    bool flag = false;

    while (low <= high) {
        mid = low + (high - low) / 2;

        if (arr[mid] == target) {
            
            // cout << mid;
            flag = true;
            break;
        }
        else if (arr[mid] < target) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }

   
    if(flag==true)
        cout << "Element found at index "<< mid << endl;
    else
        cout << "Element not found";

    return 0;
}