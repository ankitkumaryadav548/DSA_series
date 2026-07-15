#include<iostream>
using namespace std;

int pow(int x, int n){    // This is good method to find power of any number 
    if(n==1) return x;    // because here time and space complexity is     
    int ans = pow(x,n/2); // O(logn);
    if(n%2==0) return ans*ans;
    else  return ans*ans*x;
}
int main(){
    cout << pow(2,4);
}