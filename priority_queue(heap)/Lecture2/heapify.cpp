
// Heapify is a process of rearranging elements in a binary heap to maintain the Min Heap or Max Heap property.

// In simple words, heapify fixes a heap when an element is in the wrong position.
#include <iostream>
using namespace std;

int arr[50] = {0};
int idx = 1;

// Heapify down for Min Heap
void heapify(int i)
{
    int left = 2 * i;
    int right = 2 * i + 1;
    int smallest = i;

    if (left < idx && arr[left] < arr[smallest])
    {
        smallest = left;
    }

    if (right < idx && arr[right] < arr[smallest])
    {
        smallest = right;
    }

    if (smallest != i)
    {
        swap(arr[i], arr[smallest]);
        heapify(smallest);
    }
}

int main()
{
    // Example heap after replacing the root
    arr[1] = 50;
    arr[2] = 20;
    arr[3] = 30;
    arr[4] = 40;
    idx = 5;

    cout << "Before heapify: ";
    for (int i = 1; i < idx; i++)
    {
        cout << arr[i] << " ";
    }

    heapify(1);

    cout << "\nAfter heapify: ";
    for (int i = 1; i < idx; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
