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
// #include<iostream>
// #include<vector>
// using namespace std;
// int fibo(int n , vector<int>&ans){
//     if(n<=1) return n;
//     if(ans[n] != -1) return ans[n];  //2 => reuse

//     return ans[n]  = fibo(n-1 , ans)+fibo(n-2 , ans);  // 3  => store 
   
// }
// int main(){
//     int n ;
//     // int arr[] = {0,1,1,2,3,5,8,13,21};
//     cout << "Enter n: ";
//     cin >> n;
//     vector<int>ans(n+1 , -1);  // 1 => take a array/vector
//     cout <<  fibo(n , ans);
// }

//tabulation 

// #include<iostream>
// #include<vector>
// using namespace std;
// int fibo(int n , vector<int>&ans){
//    if(n <= 0) return n;
//    ans[0] = 0;
//    ans[1] = 1;
//    for(int i=2;i<=n;i++){
//       ans[i] = ans[i-1]+ans[i-2];  // 3  => store 
//    }
//    return ans[n];
    
// }
// int main(){
//     int n ;
//     // int arr[] = {0,1,1,2,3,5,8,13,21};
//     cout << "Enter n: ";
//     cin >> n;
//     vector<int>ans(n+1 , -1);  // 1 => take a array/vector
//     cout <<  fibo(n , ans);
// }

//optimization of code 

#include<iostream>
#include<vector>
using namespace std;
int fibo(int n , vector<int>&ans){
    int prev2 = 0;
    int prev1 = 1;
   for(int i=2;i<=n;i++){
      int curr = prev1+prev2;
      prev2 = prev1 ;
      prev1 = curr ;
   }
   return prev1;
    
}
int main(){
    int n ;
    // int arr[] = {0,1,1,2,3,5,8,13,21};
    cout << "Enter n: ";
    cin >> n;
    vector<int>ans(n+1 , -1);  // 1 => take a array/vector
    cout <<  fibo(n , ans);
}

