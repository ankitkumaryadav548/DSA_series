// map is used to store pair key and values

#include<iostream>
#include<unordered_map>
using namespace std;
int main(){
    unordered_map<int , string>m;
    pair<int , string>p1;
    p1.first = 12;
    p1.second = "Ankit";

    pair<int , string>p2;
    p2.first = 35;
    p2.second = "Gautam";

    pair<int , string>p3;
    p3.first = 57;
    p3.second = "Aman";
    m.insert(p1);
    m.insert(p2);
    m.insert(p3);

    // M1 => print
    for(pair<int ,string> p : m){
        cout << p.first << " " << p.second;
    }

    cout << endl;
    // M2 => print
    for(auto p : m){
        cout << p.first << " " << p.second;
    }

}
