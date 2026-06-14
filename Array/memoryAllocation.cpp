#include <iostream>
using namespace std ;
int main(){
    int arr[4] = {12,23,34,45};
    cout << arr  << endl ;  // =>it will indicate 1st index of array 
    cout << &arr[0] << endl;
    cout << &arr[1] << endl;
    cout << &arr[2] << endl;
    cout << &arr[3] << endl;

    // 0x61ff00
    // 0x61ff00
    // 0x61ff04
    // 0x61ff08
    // 0x61ff0c
}