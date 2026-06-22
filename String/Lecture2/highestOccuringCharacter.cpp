// write programme for finding most frequently occuring character in the given word 
#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string s = "ankitkumaryadav" ;   // a = 4 times occuring in this word
    vector<int>arr(26,0);
    for(int i=0;i<s.length();i++){
        char ch = s[i]; 
        int ascii = (int)ch;
        arr[ascii-97]++ ;
    }
    int max = 0;
    for(int i=0;i<26;i++){
        if(arr[i]>max) max = arr[i];
    }
    for(int i=0;i<26;i++){
        if(arr[i]==max) {
            int ascii = i + 97 ;
            char ch = (char)ascii ;
            cout << ch << " " << max << endl ;
        }
    }

}