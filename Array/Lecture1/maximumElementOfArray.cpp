//to find maximum element from the array
#include <iostream>
#include<climits>
using namespace std;

int main(){
    int n;
    cout << "Enter number of element: ";
    cin >> n;
    int arr[n];  // 24 3 6 23 86 
    for(int i=0;i<=n-1;i++){
        cin >> arr[i];
    }
    int max = INT_MIN;  // or int max = arr[0]; 
    for(int i=0;i<=n-1;i++){
       if(max<arr[i]) max=arr[i];
    }
    cout << "Maximum element from the array is: "<< max << endl;
    
    
}
