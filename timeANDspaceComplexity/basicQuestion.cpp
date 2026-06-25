// given an array of size n+1 consisting of interger from 1 to n. one of the element is duplicate of in the array. Find the duplicate element.

#include<iostream>
using namespace std;
int main(){
    int arr[] = {1,2,3,4,4,5,6,7};
    int n = sizeof(arr)/sizeof(arr[0])-1;
    int sum = 0;
    for(int i=0;i<=n;i++){
        sum += arr[i];
    }
    cout << sum << endl;
    int s = n*(n+1)/2 ;
    cout << s << endl ;

    cout << sum - s << " ";
}



