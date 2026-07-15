#include<iostream>
using namespace std;
int main(){
    int arr[4]= {10,20,30,40};
    int n=4;

    for(int i=0;i<n-1;i++){  // element will shift in left side 
        arr[i]=arr[i+1];
    }
    n-- ;
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
}