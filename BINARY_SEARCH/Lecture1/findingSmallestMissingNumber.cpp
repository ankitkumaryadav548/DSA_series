//Given a sorted an array of non-negative distict integers,find the smallest missing non-negative element from the array.

//Method 1 => time complexity 0(n)
#include<iostream>
using namespace std;
int main(){
    int arr[] = {0,1,2,3,4,8,9,12,13,14};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        if(arr[i] != i) { 
            cout << i ;
            break;
        }
    }
}

//Method 2 => time complexity => 0(logn)

#include<iostream>
using namespace std;
int main(){
    int arr[] = {0,1,2,3,5,6,7,9,12};
    int n = sizeof(arr)/sizeof(arr[0]);

    int low = 0;
    int high = n-1;
    int ans = -1;
    while(low<=high){
        int mid = low + (high-low)/2 ;
        if(arr[mid]==mid) low = mid+1;
        else{
            ans = mid;
            high = mid-1;
        }
    }
    cout << ans ;
}




