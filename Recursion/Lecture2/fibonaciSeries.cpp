//time complexity of fibonacci series =>
// T.C => 0(2^n) , it also called exponencial time complexity
//for all programme in which condition are like fibo(n-1)+fibo(n-2) , for that approx all time complexity is 0(2^n) => exponecial time complexity
//same time complexity for stairPath programme

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

//fibonacci series work in serial wise not in pallel wise

