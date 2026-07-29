//partitionation means breaking array into two equal part => sum of both partitoned array must be equal 


//formula to solve this question
// 0 to x == x+1 to n-1
// pre[x] = pre[n-1] -pre[x+1-1]
// 2*pre[x] = pre[n-1]


#include<iostream>
using namespace std;

int main(){
    int arr[] = {1,2,3,4,5,5,10};  //o/p => {1,3,6,10,15,21}
    int n  = sizeof(arr)/sizeof(arr[0]);
    //formation of prefix sum
    for(int i=1;i<n;i++){
        arr[i] = arr[i] + arr[i-1];
    }

    //check if x exists or not
    int idx = -1;
    for(int i=1;i<n;i++){
        if(2*arr[i]==arr[n-1]){
            idx = i;
            break;
        } 
    }
    if(idx!=-1) cout << "Yes it is partitioned " << idx;
    else cout << "Cannot partitioned";
}
