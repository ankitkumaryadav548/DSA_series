//Given a sorted an array of n element and a target 'x'.Find the first occurance of 'x' in the array, if element is not present then return -1.


//Method 1 => time complexity = 0(n)
#include<iostream>
using namespace std;
int main(){
    int arr[] = {1,2,2,5,6,3,3,3,3};
    int n = 9;
    int x = 3;
    for(int i=0;i<n;i++){
        if(arr[i]==x){
            cout << i << endl;
            break;
        }
    }
}

//Method 2 => time complexity => 0(logn)

#include<iostream>
using namespace std;
int main(){
    int arr[] = {1,2,2,2,5,6,3,3,3,3};
    int n = 10;
    int x = 3;

    int low = 0;
    int high = n-1;
    bool flag = false;
    while(low<=high){
        int mid = (low+high)/2;
        if(arr[mid]==x) {
            if(arr[mid-1]!=x){
                flag = true;
                cout << mid;
                break;
            }
            else{  //arr[mid-1] == x
                high = mid-1;
            }
        }else if(arr[mid]<<x) low = mid+1;
        else high = mid-1;
    }
    if(flag==false) cout << -1;
    
}