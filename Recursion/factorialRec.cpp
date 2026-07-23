#include <iostream>
using namespace std;

int fact(int n){
    if(n==1 || n==0) return 1 ;
    return n*fact(n-1);
}  
int main(){
    int n;
    cout << "Enter a Number: ";
    cin >>n ;
    cout<<fact(n);
}

//practise

#include<iostream>
using namespace std;

int  fact(int n){
    if(n==0 || n==1) return 1;
     return n*fact(n-1);
}
int main(){
    cout << fact(5);
    
}