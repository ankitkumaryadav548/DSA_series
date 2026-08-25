#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter no.: " ;
    cin >> n ;
    bool isPrime = true;

    if(n<=0) return false ;
    for(int i=2;i<n;i++){
        if(n%i==0)
        isPrime  = false ;
    }
    if(isPrime == true) cout << "No. is prime no.";
    else cout << "No. is not prime number." ;
}

