#include<iostream>
using namespace std;

int add(int a, int b){
    return a+b;
}
int product(int a, int b){
    return a*b;
}

int main(){
    cout << add(2,3) << endl;
    cout << product(2,3);
}