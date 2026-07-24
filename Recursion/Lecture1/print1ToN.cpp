#include <iostream>
using namespace std;

// void print(int i, int n){  //using extra paramter
//     if(i>n) return ;
//     cout << i << endl;
//     print(i+1,n);
// }  

void print(int n){        // 1 2 3 4 5
    if(n==0) return ;
    print(n-1);
    cout << n << endl;
}
int main(){
    int n;
    cout << "Enter a Number: ";
    cin >>n ;
    print(n);
}