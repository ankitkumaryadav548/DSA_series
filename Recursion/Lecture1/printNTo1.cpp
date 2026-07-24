#include <iostream>
using namespace std;

void print(int n){               // 5 4 3 2 1
    if(n==0) return ;
    cout<< n<< endl;
    print(n-1);
}
int main(){
    int n;
    cout << "Enter a Number: ";
    cin >>n ;

    print(n);

}