#include <iostream>
using namespace std;
int fibo(int n){
    if(n==1 || n==2) return 1;
    return   fibo(n-1) + fibo(n-2);
}
int main(){
    int n;                  // 1 1 2 3 5 8 13 21 34
    cout<< "Enter a Number: ";
    cin>> n;
    cout<<fibo(n);
}
