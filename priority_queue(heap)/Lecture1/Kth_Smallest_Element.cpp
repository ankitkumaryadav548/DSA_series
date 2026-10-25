//Find kth element Smallest element from the array
// K=3
#include<iostream>
#include<queue>
#include<algorithm>
using namespace std;
int main(){
    int arr[] = {23,45,67,12,-2,-5,45,89,2,34};
    int k = 3;
    int n =  sizeof(arr)/sizeof(arr[0]);
    // M1 => using minimum heap
    // priority_queue<int , vector<int> , greater<int>> pq;
    // for(int i = 0; i<n; i++){
    //     pq.push(arr[i]);
    // }
    // for(int i=0;i<k-1;i++){
    //     pq.pop();
    // }
    // cout << pq.top();

    // M2 => using sorting 
    priority_queue<int>pq;
    for(int i=0;i<n;i++){
        pq.push(arr[i]);
        if(pq.size()> k ) pq.pop();      
    }
    cout << pq.top();
}

