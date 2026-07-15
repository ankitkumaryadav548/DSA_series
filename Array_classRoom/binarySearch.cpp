#include <iostream>
using namespace std;
int main(){
    int arr[5] = {10,20,30,40,50};
    int n = 5;
    int key = 30;
    int low = 0;
    int high = n-1;
    int mid;
    while(low <= high){
        mid = (low+high)/2;
    if(arr[mid]==key){
        cout<<"Element found at index: "<< mid;
        return 0;
    }
    else if(arr[mid]<key){
        low = mid+1;
    }
    else{
        high = mid - 1;
    }
    }   
    cout<<"Element not found"; 
    return 0;
}

