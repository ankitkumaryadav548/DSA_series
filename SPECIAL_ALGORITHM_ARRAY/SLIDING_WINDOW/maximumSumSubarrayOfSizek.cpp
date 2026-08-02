// // The Sliding Window technique is an optimization method used to solve problems involving arrays or strings where we need to find something in a contiguous subarray (window).

// // Instead of checking every possible subarray (which takes O(n²) time), we maintain a window and move it through the array, making the solution O(n) in many cases.

// //Method 1 => without using sliding window 
// //here time complexity is so much so we will solve this same problem using sliding window

// //maximum sum of subarray of size k
// #include<iostream>
// #include<algorithm>
// using namespace std;
// int main(){
//     int arr[] = {3,5,6,2,1,4,5,8,4,2};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     int k = 3;
//     int maxSum = 0;
//     int idx = -1;
//     for(int i=0;i<=n-k;i++){  //total no. od op = n-k+1
//         int sum = 0;
//         for(int j=i;j<i+k;j++){   //k times
//             sum += arr[j];
//         }
//         if(maxSum<sum){
//             maxSum = sum;
//             idx = i;
//         }

//     }
//     //total op = (n-k+1)*k
//     //time complexity => 0(k*n)  => 0(n^2)
//     cout << maxSum << endl;
//     cout << idx << endl;

// }

// // Method 2 => using sliding window
// // Time Complexity => 0(n)
// // Space Complexity => 0(1)

// #include<iostream>
// #include<climits>
// using namespace std;
// int main(){
//     int arr[] = {3,5,6,2,1,4,5,8,4,2};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     int k = 3;
//     int maxSum = INT_MIN;
//     int sum = 0;
//     int idx = 0;

//      // First window
//     for(int i=0;i<k;i++){   //total no. op => k
//         sum += arr[i];
//     }

//     maxSum = sum;
//     // Slide the window
//     int i = 1;
//     int j = k;
//     while(j<n){    // no. of op => n-k
//         sum = sum + arr[j] - arr[i-1];
//         if(maxSum<sum){
//             maxSum = sum;
//             idx = i;
//         }
//         i++ ;
//         j++ ;
//     }
//     cout << maxSum << endl;
//     cout << idx << endl;
//     //time complexity => 0(n)


// }



//practise of sliding window algorithm

#include<iostream>
using namespace std;

int main()
{
    int arr[] = {2,5,6,3,1,6,8,3,9,3};
    int n = sizeof(arr)/sizeof(arr[0]);

    int k = 3;
    int currSum = 0;
    int preSum = 0;
    int maxSum = 0;
    int idx = 0;

    // Calculate first window sum
    for(int i = 0; i < k; i++)
    {
        currSum += arr[i];
    }

    preSum = currSum;
    maxSum = currSum;

    int i = 1;
    int j = k;

    while(j < n)
    {
        // Calculate current window using previous window sum
        currSum = preSum + arr[j] - arr[i-1];

        if(currSum > maxSum)
        {
            maxSum = currSum;
            idx = i;
        }

        // Update previous sum for next iteration
        preSum = currSum;

        i++;
        j++;
    }

    cout << "Maximum Sum = " << maxSum << endl;
    cout << "Starting Index = " << idx << endl;

    return 0;
}

//pracitse
