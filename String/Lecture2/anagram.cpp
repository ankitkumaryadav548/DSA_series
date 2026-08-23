//leetcode 242 
// An anagram means two strings have exactly the same characters with the same frequencies, but possibly in a different order.
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string m ;
    cout << "Enter 1st word: ";
    cin >> m;
    string n ;
    cout << "Enter 2nd word: ";
    cin >> n;

    sort(m.begin(),m.end());
    sort(n.begin(),n.end());
    if(m==n) cout << true; // 1 => means true
    else cout << false;   // 0 => means false
}

