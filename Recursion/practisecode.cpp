#include<iostream>
using namespace std;

void fun(int n){
    if(n==0) return ;
    cout << "Good Morning" << endl;
    fun(n-1);   
    cout << "Good evening" << endl;
}

int fact(int n){
    if(n==0 || n==1) return 1;
    return n*fact(n-1);

}

int sum(int n){
    if(n==0) return 0;
    return n + sum(n-1);
}

void print(int n){
    if(n==0) return;
    cout << n << endl;
    print(n-1);
    cout << n << endl;

}

int main(){
    int n;
    cout << "Enter number: ";
    cin >> n;
    // fun(n);
    // cout << fact(n) ;
    // cout << sum(n);
    print(n);
}




