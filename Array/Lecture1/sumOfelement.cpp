#include <iostream>
using namespace std;

int main(){
    int sum=0 ;
    int arr[] = {12,23,43};
    int size = sizeof(arr)/sizeof(arr[0]);
    // cout << size ;
    for(int i=0;i<=size-1;i++){
        // sum = arr[i] ;
        sum += arr[i];
    }
    cout << sum;
}