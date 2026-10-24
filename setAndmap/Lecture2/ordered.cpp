//oredered ser and map
//T.C => 0(logn)

#include<iostream>
#include<map>
#include<set>
using namespace std;
int main(){
    set<int>s;
    s.insert(10);
    s.insert(50);
    s.insert(30);
    for(int ele : s){
        cout << ele << " ";
    }
    cout << endl;
    map<string , int> m;
    m["Ankit"] = 110;
    m["Gautam"] = 79;
    m["Aman"] = 10;
    for(auto x : m){
        cout <<  x.first << " " << x.second << endl;
    }


}