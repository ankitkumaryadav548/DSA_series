#include <iostream>
using namespace std;
int main(){
    int arr[] = {2,3,4,5};
    int product = 1;
    int size = sizeof(arr)/sizeof(arr[0]);
    // cout << size ;
    for(int i=0;i<=size-1;i++){
        // sum = arr[i] ;
        product *= arr[i];
    }
    cout << product;
}
