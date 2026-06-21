//input a string of length n and count all the vowel in the given string
#include<iostream>
#include<string>
using namespace std;
int main(){
    int n ;
    char str[n];
    cout << "Enter a sentence: ";
    cin >> str[n];
    // n = sizeof(str)/sizeof(str[0]);
    int count = 0 ;
    for(int i=0;i<n;i++){
        if(str[i]=='a','e','i','o','u' || 'A','E','I','o','U'){
            // cout << str[i]<< " ";
            count ++;
        }
        cout << count ;
    }
}