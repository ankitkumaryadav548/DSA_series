// //given a sorted interger array and an integer 'x', find the lower bound of x.

// //1,2,4,5,9,15,18,21,24
// //if x = 20 then lower bound will be 18 so we have to return 18
// // and upper bound will 21

// //Method1  => time complexity = 0(n)
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[] = {1,2,4,5,9,15,18,21,24};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     int target = 20;
//     for(int i=0;i<n;i++){
//         if(arr[i]>target){
//          cout << arr[i-1];
//          break;
//         }    
       
//     }
// }


// //Method2 => time complexity => 0(logn)
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[] = {1,2,4,5,9,15,18,21,24};
//     int n = sizeof(arr)/sizeof(arr[0]);

//     int low = 0;
//     int high = n-1;
//     bool flag = false;
//     int target = 25;
//     while(low<high){
//         int mid = (low+high)/2 ;
//         if(arr[mid]==target) {
//             cout << arr[mid-1];
//             flag=true ;
//             break;
//         }
//         else if(arr[mid]<target) low = mid+1;
//         else high = mid-1;
//     }
//     if(flag == false){
//         cout << arr[high];
//     }

// }

//practise code for lower bound
#include<iostream>
using namespace std;
int main(){
    int arr[] = {1,2,4,5,9,15,18,21,24};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    int target = 20;
    bool flag = false;
    int low = 0;
    int high = n-1;

    while(low<=high){
        int mid = low + (high-low)/2 ;
        if(arr[mid]==target) {
            cout << arr[mid-1];
            flag = true;
            break;
        }
        else if(arr[mid]<target) low = mid+1;
        else{
            high = mid-1;
        }
    }
    if(flag==false) cout << arr[high];
    
}

