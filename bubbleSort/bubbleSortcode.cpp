//bubble sort

#include<iostream>
using namespace std;
int main(){
    int n = 6;
    int arr[6] = {3,4,1,6,2,5};
    for(int i=0;i<n;i++){
        cout << arr[i]<< " ";
    }
    cout << endl;
    for(int i=0;i<=n-1;i++){
        for(int j=0;j<=n-1;j++){
            if(arr[j]>arr[j+1]){
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