//Search in rotated sorted array

// method 1 => time complexity => 0(n)
#include<iostream>
using namespace std;
int main(){
    int arr[] = {34,12,24,3,5,67};
    int target = 24;
    int n = 6;
    for(int i=0;i<n;i++){
        if(arr[i]==target){
            cout << i;
            break;
        }
    }
}

//method 2 => time complexity => 0(logn)
//we have to solve this question using binary search

//steps to solve this question 
//1.1stly we have to find pivot(changing) element 
//2.now we get 2 subarray , we have to apply binary search in both subarray indiviually
//3.if array is already sorted mans there is no rotation happen then we have to apply binary search only
//4.there is special case in leetcode => that is there are only 2  element present in array then we have to return num[0]==0 return 0 else if num[1]==1 return 1 else return -1;

//leetcode 

// class Solution {
// public:
//     int search(vector<int>& nums, int target) {
//         int n = nums.size();
//         int low = 0;
//         int high = n-1;
//         int target;
//         //for (2 element) array => special case
//         if(n == 2){
//             if(nums[0]==target) return 0;
//             else if(nums[1]==target) return 1;
//             else return -1;
//         }
//         int mid;
//         int pivot = -1;
//         //finding pivot element/index
//         while(low<=high){
//             mid = low + (high-low)/2;
//             if(nums[mid]<nums[mid-1] && nums[mid]<nums[mid+1]){
//                 pivot = mid;
//                 break;
//             }
//             else if(nums[mid]>nums[mid-1] && nums[mid]>nums[mid+1]){
//                 pivot = mid+1;
//                 break;
//             }else if(nums[mid]>nums[high]) low = mid+1;
//             else high = mid-1 ;
//         }
//         if(pivot = -1){  // already sorted / no rotation
//             low = 0;
//             high = n-1;
//             while(low<=high){
//             mid = low + (high-low)/2;
//                 if(nums[mid]==target) return mid;
//                 else if(nums[mid]<target) low = mid+1;
//                 else high = mid-1;
//             }
//             return -1;
//         }
//         //searching....
//         if(target>=nums[0] && target<=nums[pivot-1]){
//             low = 0;
//             high = pivot-1;
//             //apply normal binary search 
//             while(low<=high){
//             mid = low + (high-low)/2;
//                 if(nums[mid]==target) return mid;
//                 else if(nums[mid]<target) low = mid+1;
//                 else high = mid-1;
//             }

//         }
//         else{
//             if(target>=nums[pivot] && target<=nums[n-1]){
//              low = pivot;
//             high = n-1;
//             //apply normal binary search 
//             mid = low + (high-low)/2;
//             while(low<=high){
//                 if(nums[mid]==target) return mid;
//                 else if(nums[mid]<target) low = mid+1;
//                 else high = mid-1;
//              }   
//             }
//         }
//         return -1; 
//     }
//};
