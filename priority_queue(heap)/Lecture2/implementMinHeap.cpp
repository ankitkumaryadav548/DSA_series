#include <iostream>
using namespace std;

class MinHeap{
public:
    int arr[50];
    int idx;
    MinHeap()
    {
        idx = 1;
    }
    int top(){
    if (idx == 1){
        cout << "Heap is empty" << endl;
        return -1;
    }
    return arr[1];
}
    void push(int x)
    {
        arr[idx] = x;
        int i = idx;
        idx++;
        // swapping of i with parent till i==1;
        while (i != 1)
        {
            int parent = i / 2; 
            if (arr[i] < arr[parent])
                swap(arr[i], arr[parent]);
            else
                break;
            i = parent;
        }
    }
    
    void pop() {
    if(idx == 1) {
        cout << "Heap is empty";
        return;
    }

    arr[1] = arr[idx - 1];
    idx--;

    int i = 1;

    while(true) {
        int left = 2 * i;
        int right = 2 * i + 1;
        int smallest = i;

        if(left < idx && arr[left] < arr[smallest]) {
            smallest = left;
        }

        if(right < idx && arr[right] < arr[smallest]) {
            smallest = right;
        }

        if(smallest == i) {
            break;
        }

        swap(arr[i], arr[smallest]);
        i = smallest;
    }
}

    int size(){
        return idx-1;
    }
};

int main()
{
    MinHeap pq ;
    pq.push(10);
    pq.push(20);
    cout << pq.size()<< endl;
    pq.push(30);
    pq.push(40);
    cout << pq.top() << endl;
    cout << pq.size() << endl;
    pq.pop();
    cout << pq.top() << " " <<  pq.size() ;
}
