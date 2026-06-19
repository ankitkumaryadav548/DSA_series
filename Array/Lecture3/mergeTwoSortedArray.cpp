#include<iostream>
using namespace std;
int main(){
    int arr1[] = {1,3,5,7};
    int arr2[] = {2,4,6,8};
    int m = sizeof(arr1)/sizeof(arr1[0]);
    int n = sizeof(arr2)/sizeof(arr2[0]);

    int arr3[n+m] = {};

    int i=0;
    int j=0;
    int k=0;
    while(i<=n-1 && j<=m-1){
        if(arr1[i]<arr2[j]){
            arr3[k] = arr1[i];
            i++ ;
            k++ ;
        }
        if(arr1[i]>arr2[j]){
            arr3[k] = arr2[j];
            j++ ;
            k++ ;
        }
        
    }
    for(int i=0;i<8;i++){
        cout << arr3[k] << " ";

    }
}