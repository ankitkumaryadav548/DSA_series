#include<iostream>
using namespace std;

void display(int a[],int size) // we are passing array by refernce not by value i.e we can use 
{                              //different name of array
    for(int i=0;i<=size-1;i++){
        cout<<a[i]<< " ";
    }
    cout << endl ;
}
void change(int arr[], int size){
    arr[0] = 100;
    return ;
}
int main(){
    int arr[] = {12,23,34,45,56}; 
    int size = sizeof(arr)/sizeof(arr[0]);
    cout << size << endl ;
    display(arr,size);  // we generally pass array with size 
    change(arr,size);
    display(arr,size);
}