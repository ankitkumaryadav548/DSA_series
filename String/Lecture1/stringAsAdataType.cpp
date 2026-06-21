#include<iostream>
#include<string>
using namespace std;
int main(){
    // string str = "Hello dear";
    // cout << str;
    //taking input from user
    string str;
    cout << "Enter some string: ";
    // cin >> str; // only if the given string has no spaces
    getline(cin , str); // it will take whole line as input
    cout << str[4];
}


