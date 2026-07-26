//find maximum value in array using recursion

#include<iostream>
#include<algorithm>
#include<climits>
using namespace std;

void maxValue(int arr[], int n, int idx,int max){   //printing max value 
    if(idx == n) {
        cout << max;
        return ;
    }
    if(max<arr[idx]) max = arr[idx];    
    maxValue(arr,n,idx+1,max);
}

void printMax(int arr[], int n, int idx){   //storing max value
    if(idx==n) return INT_MIN;
    return max(arr[idx],printMax(arr,n,idx+1));

}
int main(){
    int INT_MIN;
    int arr[] = {12, 34, 456, 67, 23, 46};
    int n = sizeof(arr)/sizeof(arr[0]);
    maxValue(arr,n,0,INT_MIN);
    cout << endl;
    printMax(arr,n,0);
}