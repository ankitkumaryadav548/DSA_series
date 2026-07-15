#include<iostream>
using namespace std;
int main(){
    int arr[4]= {10,20,30,40};
    int n=4;
    int pos = 2;
    int value = 50;

    for(int i=n;i>pos;i--){
        arr[i]=arr[i-1];
    }
    arr[2]=50;
    n++ ;

    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
}