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


#include<iostream>
using namespace std;

void Hanoi(int n,char A,char B,char C){
    if(n==0) return ;
    Hanoi(n-1,A,C,B);
    cout << A << "->" << C << endl;
    Hanoi(n-1,B,A,C);
}
int main(){
    int n;
    cout << "Enter a Number: ";
    cin >> n;
    Hanoi(n,'a','b','c');
}

// //practise

#include<iostream>
using namespace std;

void Hanoi(int n , char A, char B, char C){
    if(n==0) return ;
    Hanoi(n-1,A,C,B);
    cout << A << "->" << C << endl;
    Hanoi(n-1,B,A,C);

}

int main(){
    int n;
    cout << "Enter n : ";
    cin >> n;
    Hanoi(n,'A','B','C');
}

//practise tower of Hanoi
#include <iostream>
using namespace std;

void hanoi(int n, char a, char b, char c){
    if(n==0) return;
    hanoi(n-1,a,c,b);
    cout << a << "->" << c << endl;
    hanoi(n-1,b,a,c);
}
int main(){
    int n;
    cout << "Enter n: ";
    cin >> n;
    hanoi(n, 'a','b','c');
}


