//printing all element of array using recursion

#include<iostream>
#include<vector>
using namespace std;

void display(int arr[],int n,int idx){
    if(idx == n) return ;
    cout <<  arr[idx] << " ";
    display(arr,n,idx+1);
}

void display2(vector<int>&v,int idx){
    if(idx == v.size()) return ;
    cout <<  v[idx] << " ";
    display2(v,idx+1);
}
int main(){
    int arr[] = {23,34,4,23,46,6,89,45};
    int n = sizeof(arr)/sizeof(arr[0]);
    display(arr,n,0);
    cout << endl;
        
    //using vector
    vector<int> v(n);
    for(int i=0;i<n;i++){
        v[i] = arr[i];
    }

    display2(v,0);

}


// // practise to print array using recursion
// //  23 34 45 78 5 31 

#include<iostream>
using namespace std;

void display(int arr[], int n, int idx){
    if(idx == n) return ;
    cout << arr[idx] << " ";
    
    display(arr,n,idx+1);


}
int main(){
    int arr[] = {12, 34, 456, 67, 23, 46};
    int n = sizeof(arr)/sizeof(arr[0]);
    display(arr,n,0);
}