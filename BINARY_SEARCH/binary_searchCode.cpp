#include <iostream>
using namespace std;

int main() {
    int arr[] = {2, 5, 8, 12, 16, 23, 38, 56, 72};
    int n = sizeof(arr) / sizeof(arr[0]);

    int target = 23;

    int low = 0;
    int high = n - 1;
    int mid;
    int index = -1;

    while (low <= high) {
        mid = low + (high - low) / 2;

        if (arr[mid] == target) {
            index = mid;
            break;
        }
        else if (arr[mid] < target) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }

    if (index != -1)
        cout << "Element found at index " << index << endl;
    else
        cout << "Element not found";

    return 0;
}