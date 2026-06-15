//to find minimum element from the array 
#include <iostream>
#include<climits>
using namespace std;

int main(){
    int n;
    cout << "Enter number of element: ";
    cin >> n;
    int arr[n];  // 1 2 3 4 5
    for(int i=0;i<=n-1;i++){
        cin >> arr[i];
    }
    int min = INT_MAX;  // or int max = arr[n];
    for(int i=0;i<=n-1;i++){
       if(min>arr[i]) min=arr[i];
    }
    cout << "Minimum element form the array is:"<< min << endl;
    
    
}