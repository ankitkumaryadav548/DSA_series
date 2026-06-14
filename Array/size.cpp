#include <iostream>
using namespace std ;

int main(){
    int arr[] = {12,23,34,34,45,56,67,6,78,34,56,68,7};
    int n = (sizeof(arr)/sizeof(arr[0]));  //we can take any index to divide 
    cout << "size of array is: " << n ; 
}