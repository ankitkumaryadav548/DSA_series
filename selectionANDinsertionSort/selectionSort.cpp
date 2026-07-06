//selection sort

//step for selection sort
//1. find minimum element  and index of minimum element from the array
//2. compare minimum element with 1st element of the array if minimum element is less than 1st element then swap both element 

#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n = 6 ;
    int arr[] = {11,2,7,3,5,1};

    for(int i=0;i<n;i++){   //printing array
        cout << arr[i] << " ";
    }
    cout << endl;

    for(int i=0;i<n-1;i++){
        int min = INT_MAX ;
        int minIdx = -1 ;
        for(int j=i;j<n;j++){
            if(arr[j]<min){
                min = arr[j];
                minIdx = j;
            }
        }
        swap(arr[i],arr[minIdx]);
    }
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }

}

