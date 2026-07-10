//Given a sorted an array of non-negative distict integers,find the smallest missing non-negative element from the array.

//Method 1 => time complexity 0(n)
#include<iostream>
using namespace std;
int main(){
    int arr[] = {0,1,2,3,4,8,9,12,13,14};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        if(i != arr[i]) {
            cout << i ;
            break;
        }
    }
}




