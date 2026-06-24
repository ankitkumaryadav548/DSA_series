//find longest common prefix from the given string

//steps to solve
//1.store string in vector
//2.sort the vector
//3.then after we have to compare character from first word to last word in the string     

#include<iostream>
#include<string>
#include<sstream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    // string s[] = {"lotous","lover","loyal"};
    vector<string>v;
    v.push_back("flower");
    v.push_back("flight");
    v.push_back("apple");

    for(int i=0;i<3;i++){
        cout << v[i] << endl;
    }
    cout << endl;
    sort(v.begin(),v.end());
    for(int i=0;i<3;i++){
        cout << v[i] << endl;
    }
    string s = "";
    int n = v.size();
    cout << n;
    string first = v[0];
    string last = v[n-1];
    for(int i=0;i<(min(first.size(),last.size()));i++){
        if(first[i]==last[i]) {
            s += first[i];
            cout << s;
        }
        else break;
    }
    // cout << s;
    // return s;
}

