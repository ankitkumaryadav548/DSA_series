#include <iostream>
using namespace std;

// void sum1ToN(int sum, int n) {  //using extra parameter
//     if(n==0){
//         cout << sum << endl;
//         return ;
//     }
//     sum1ToN(sum+n,n-1);
// }  

int sum2(int n){        // Same as Factorial of n;
    if(n==0) return 0;  //Sum of N number;
    return n + sum2(n-1);
}

int main(){
    int n;
    cout << "Enter a Number: ";
    cin >>n ;
    // sum1ToN(0,n);
    cout<<sum2(n);
}