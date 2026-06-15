#include<iostream>
using namespace std;
int main(){
    int arr[] = {12,23,34,55,56};
    int* ptr = arr ;
    int* ptr = &arr[0] ; //this is correct
    int* ptr = &arr ;  // this is wrong way to pass pointer in array (opposite to passing   pointer to number)
    cout << ptr << endl;  // address of array of 1st index
    cout << &ptr[0] << endl; // adress of array of 1st index
    cout << &ptr << endl;  // address of ptr
    cout << ptr[0] << endl;  // 12

    // M1.display of array
    for(int i=0;i<=4;i++){
        cout << arr[i]<< " " ; // same 
        cout << ptr[i]<< " " ;   // same
        cout << i[ptr] << ""  ; // same     //i[arr] == *(i+arr) == *(arr+i) == arr[i]
        cout << i[arr] << ""  ; // same
    }
    cout << endl ;

    //M2.display of array
    for(int i=0;i<=4;i++){ 
        cout << *ptr<< " " ; 
        ptr++ ;
    }
    *ptr = 8;  //ptr[0] = 8
    ptr++ ;   //ptr is pointing to 2nd element of array
    *ptr = 9; //ptr[1] = 9
    ptr-- ;   //ptr is pointing to 1st element of array
   
    for(int i=0;i<=4;i++){   // o/p => 8 9 34 55 56
        cout << *ptr<< " " ; 
        ptr++ ;
    }
}