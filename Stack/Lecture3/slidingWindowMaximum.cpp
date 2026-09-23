// arr =  1,3,-1,-2,5,3,6,7
// ans = 3,3,5,5,6,7 

// M1 => using brute force
#include<iostream>
#include<climits>
using namespace std;
int main(){
    int arr[] = {1,3,-1,-2,5,3,6,7};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k = 3;
    //find max in arr
    int ans[n-2];
    for(int i = 0;i<n-k+1;i++){
        int Max = INT_MIN;
        for(int j=i;j<i+k;j++){
            if(arr[j]>Max) 
                Max = arr[j];
        }
        ans[i] = Max;
}
    for(int i=0;i<n-2;i++){
        cout << ans[i] << " ";
    }
 

}