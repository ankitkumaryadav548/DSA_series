//check whether given array is sorted or not

#include <iostream>
using namespace std;
int main() {
    int arr[] = {12,67,34,56,32};
    int n = sizeof(arr) / sizeof(arr[0]);

    bool flag = true;
    for(int i = 0; i < n - 1; i++) {
        if(arr[i] > arr[i + 1]) {
            flag = false;
            break;
        }
    }
    if(flag)
        cout << "Array is sorted";
    else
        cout << "Array is not sorted";

    return 0;
}