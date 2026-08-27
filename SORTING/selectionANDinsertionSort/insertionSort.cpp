// //insertion sort
// //insertion sorting is the stable sorting algorithm

// //steps for selection sort =>
// // Assume the first element is already sorted.
// // Pick the next element (key).
// // Compare the key with elements on its left.
// // Shift all larger elements one position to the right.
// // Insert the key into its correct position.
// // Repeat until all elements are sorted.


// #include<iostream>
// using namespace std;
// int main(){
//     int n = 5;
//     int arr[n] = {5,4,1,3,2};
//     for(int i=0;i<n;i++){
//         cout << arr[i] << " ";
//     } 
//     cout << endl;
//     for(int i=1;i<n;i++){
//         int j = i;
//         // while(j>=1){    //M1
//         //     if(arr[j]<arr[j-1]) swap(arr[j],arr[j-1]);
//         //     else{
//         //         // (arr[j]>=arr[j-1]) ;
//         //         break; 
//         //     }
//         //     j-- ;1
//         // }
//         //M2
//         while(j>=1 && arr[j-1]> arr[j]){
//             swap(arr[j],arr[j-1]);
//             j-- ;
//         }
//     }
//     for(int i=0;i<n;i++){
//         cout << arr[i] << " ";
//     }
// }



#include <iostream>
using namespace std;

int main(){
    // int arr[] = {3,5,7,2,1,6,9} ;
    // int n = sizeof(arr)/sizeof(arr[0]);

    int arr[5];
    int n =5;
    cout << "Enter element : ";
    for(int i=0;i<n;i++){
        cin >> arr[i] ;
    }

    for(int i=0;i<n;i++){
        cout << arr[i] << " " ;
    }
    cout << endl;
    

    for(int i = 1;i<n-1;i++){
        int j = i;
        while(j>=1 ){
            if(arr[j]<arr[j-1]){
                swap(arr[j],arr[j-1]);
                j-- ;
            }
            else break;
        }        
        
    }
    for(int i=0;i<n;i++){
        cout << arr[i] << " " ;
    }

}

// insertion sorting is known as Inplace sorting algorithm

