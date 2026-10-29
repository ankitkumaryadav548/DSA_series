// Minimum cost to connect all ropes
#include <iostream>
#include <vector>
#include<queue>
using namespace std;
int main(){
    int arr[] = {2,7,4,1,8};
    // int n = sizeof(arr)/sizeof(arr[0]);
    int n = sizeof(arr)/4 ;
    priority_queue<int , vector<int> , greater<int> >pq ;
    for(int i =0;i<n;i++){
        pq.push(arr[i]);
    }

    int sum = 0;
    while(pq.size()>1){
        int a = pq.top();
        pq.pop();
        int b = pq.top();
        pq.pop();
        int c = a+b;
        pq.push(c);
        sum += c;
       
    }
    
    cout << sum ;

}