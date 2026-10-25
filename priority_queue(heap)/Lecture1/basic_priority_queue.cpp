#include<iostream>
#include<queue>
using namespace std;
int main(){
    // max-heap (by default)
    // priority_queue<int>pq;
    // pq.push(12);
    // pq.push(2);
    // pq.push(53);
    // pq.push(-22);
    // cout << pq.size()<<endl;  // 4
    // cout << pq.top() << endl; // 53
    // pq.pop();
    // cout << pq.top() << endl; // 12
    //min-heap 
    priority_queue<int , vector<int> , greater<int> >pq;
    pq.push(12);
    pq.push(2);
    pq.push(53);
    pq.push(-22);
    cout << pq.size()<<endl;  // 4
    cout << pq.top() << endl; // -22
    pq.pop();
    cout << pq.top() << endl; // 2
}