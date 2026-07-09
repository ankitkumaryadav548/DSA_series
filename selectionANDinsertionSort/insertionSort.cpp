//selection sort
//insertion sorting is the stable sorting algorithm

//steps for selection sort =>
// Assume the first element is already sorted.
// Pick the next element (key).
// Compare the key with elements on its left.
// Shift all larger elements one position to the right.
// Insert the key into its correct position.
// Repeat until all elements are sorted.


#include<iostream>
using namespace std;
int main(){
    int n = 5;
    int arr[n] = {5,4,1,3,2};
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    } 
    cout << endl;
    for(int i=1;i<n;i++){
        int j = i;
        // while(j>=1){    //M1
        //     if(arr[j]<arr[j-1]) swap(arr[j],arr[j-1]);
        //     else{
        //         // (arr[j]>=arr[j-1]) ;
        //         break; 
        //     }
        //     j-- ;1
        // }
        //M2
        while(j>=1 && arr[j]<arr[j-1]){
            swap(arr[j],arr[j-1]);
            j-- ;
        }
    }
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
}

