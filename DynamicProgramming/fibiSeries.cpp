// #include<iostream>
// using namespace std;
// int fibo(int n){
//     if(n<=1) return n;
//     return fibo(n-1)+fibo(n-2);
// }
// int main(){
//     int n ;
//     // int arr[] = {0,1,1,2,3,5,8,13,21};
//     cout << "Enter n: ";
//     cin >> n;
//     cout <<  fibo(n);
// }

// this is simple recusrion 
// then we have to do memoization
// then tabulation 
// then reduce space complexity  => otiple solution 


// memoization
#include<iostream>
#include<vector>
using namespace std;
int fibo(int n , vector<int>&ans){
    if(n<=1) return n;
    if(ans[n] != -1) return ans[n];  //2 

    return ans[n]  = fibo(n-1 , ans)+fibo(n-2 , ans);  // 3
   
}
int main(){
    int n ;
    // int arr[] = {0,1,1,2,3,5,8,13,21};
    cout << "Enter n: ";
    cin >> n;
    vector<int>ans(n+1 , -1);  // 1
    cout <<  fibo(n , ans);
}