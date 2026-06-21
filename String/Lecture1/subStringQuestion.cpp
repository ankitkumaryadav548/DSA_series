// take input of even length and print the second half of string using inbuild substr
#include<iostream>
#include <string>
using namespace std ;
int main(){
    string str ;
    cout << "Enter string: ";
    cin >> str ;
    int a = str.size();
    if(a%2==0){
        cout << str.substr(a/2);
    }
    else cout << "String is of odd length";
}
