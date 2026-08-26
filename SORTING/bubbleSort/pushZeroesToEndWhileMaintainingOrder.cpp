//Push zero to end while mainating the relative order of other elements.
//hint =>
//If the element is equal to zero then swap the element

#include<iostream>
using namespace std;
int main(){
    int n = 8;
    int arr[] = {4,0,3,2,0,0,6,0};
    for(int i=0;i<n;i++){
        cout << arr[i]<< " ";
    }
    cout << endl;
  
    for(int i=0;i<=n-1;i++){
        for(int j=0;j<=n-1-i;j++){  // most efficient to include (n-1-i)
            if(arr[j] == 0){  //swap
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp ;
                // swap(arr[j],arr[j+1]);  //sortcut

            }
        }
    }
    for(int i=0;i<n;i++){
        cout << arr[i]<< " ";
    }
}