//given an array with N distinct elements, convert given array to a form where all element are in the range of 0 to n-1 . The order of element is the same i.e 0 is placed with smallest element , 1 is placed with second smallest element and so on .. and n-1 is placed with largest element.

//steps for Method 1 are =>
//1.Copy the array.
//2.Sort the copied array.
//3.For each original element, find its position in the sorted array.
//4.Replace it with that position (rank).

#include <iostream>
#include <algorithm>
#include<climits>
#include <vector>
using namespace std;

int main() {
    int arr[] = {23, 76, 3, 45, 24};
    int n = 5;

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    //Method 1
    // Copy the original array
    int temp[5];
    for (int i = 0; i < n; i++) {
        temp[i] = arr[i];
    }
    
    // Sort the copied array
    sort(begin(temp),end(temp));

    // Replace each element with its rank
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
                if (arr[i] == temp[j]) {
                        arr[i] = j;
                        break;
            }
        }
    }  
}

//Method 2
#include <iostream>
#include <algorithm>
#include<climits>
#include <vector>
using namespace std;

int main() {
    int arr[] = {23, 76, 3, 45, 24};
    int n = 5;

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    vector<int>v(n,0);
    int x = 0;
    for(int i=0;i<n;i++){
        int min = INT_MAX;
        int minId = -1;
        for(int j=0;j<n;j++){
            if(v[j]==1) continue;
            else{
                if(min>arr[j]){
                    min = arr[j];
                    minId = j;
                }
            }
            arr[minId] = x;
            v[minId] = 1; //visited
            x++ ;
        }
    }
    // Print the modified array
    cout << "Converted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }