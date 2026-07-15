#include <iostream>
using namespace std;
void Hanoi(int n, char A , char B , char C){
    if (n==0) return ;
    Hanoi(n-1,A,C,B);
    cout << A <<"->" << C << endl;
    Hanoi(n-1,B,A,C);
}
int main(){
    int n;
    cout<<"Enter a Number: ";
    cin >> n;
    Hanoi(n,'A','B','C');

}


// #include<iostream>
// using namespace std;

// void Hanoi(int n,char A,char B,char C){
//     if(n==0) return ;
//     Hanoi(n-1,A,C,B);
//     cout << A << "->" << C << endl;
//     Hanoi(n-1,B,A,C);
// }
// int main(){
//     int n;
//     cout << "Enter a Number: ";
//     cin >> n;
//     Hanoi(n,'a','b','c');
// }