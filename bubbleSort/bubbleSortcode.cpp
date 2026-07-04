// bubble sorting

#include<iostream>
using namespace std;
int main(){
    int n = 6;
    int arr[6] = {13,4,1,6,-2,-5};
    for(int i=0;i<n;i++){
        cout << arr[i]<< " ";
    }
    cout << endl;
    //bubble sort
    for(int i=0;i<=n-1;i++){
        //traverse
        // for(int j=0;j<=n-1;j++){
        for(int j=0;j<=n-1-i;j++){  // most efficient to include (n-1-i)
            if(arr[j]>arr[j+1]){  //swap
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

//we are including i in (n-1-i) so that sorting become more efficient 
// in including i => all duplicate/ reduncing sorting will be ignore


// more efficient method to sort
//bubble sort optimised
#include<iostream>
using namespace std;
int main(){
    int n = 6;
    int arr[6] = {13,4,1,6,-2,-5};
    for(int i=0;i<n;i++){
        cout << arr[i]<< " ";
    }
    cout << endl;
    //bubble sort
    for(int i=0;i<=n-1;i++){
        //traverse
        // for(int j=0;j<=n-1;j++){
        bool flag = true;   
        //we are using bool flag to check that array is already sorted or not
        for(int j=0;j<=n-1-i;j++){  // most efficient to include (n-1-i)
            if(arr[j]>arr[j+1]){  //swap
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp ;
                flag = false;
                // swap(arr[j],arr[j+1]);  //sortcut

            }
        }
        if(flag==true){  //means swap didn't happen => array is already sorted
            break;
        }
    }
    for(int i=0;i<n;i++){
        cout << arr[i]<< " ";
    }
}

//time complexity
// best case => O(n)
// avg case => O(n^2)
// worst case => O(n^2)