//return peak index of Mountain array

//steps to solve this question
//1.find element which is greater than previous and next element
// and the return it 
//method 1 => time complexity =>0(n) 
#include<iostream>
using namespace std;
int main(){
    int arr[] = {1,2,5,7,4,3,0};  
    int n = sizeof(arr)/sizeof(arr[0]);

    for(int i=0;i<n;i++){
        if(arr[i]>arr[i-1] && arr[i]>arr[i+1]){
            cout << i ;
            break;
        }
    }
}

//method 2 => time complexity => 0(logn);

#include<iostream>
using namespace std;
int main(){
    int arr[] = {1,2,5,7,4,3,0};
    int n = sizeof(arr)/sizeof(arr[0]);
    int low = 1;
    int high = n-2;
    int mid;
    while(low<=high){
        mid = (low+high)/2 ;
        if(arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1]){
            cout << mid;  // it will return index of highest element 
            break;
        }
        else if(arr[mid]>arr[mid+1]) high = mid-1;
        else low = mid+1;
    }
    



}