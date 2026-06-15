#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v(6); // 0 0 0 0 0 0  => declare and initialized also both
    // vector<int>v(6,2);//2 2 2 2 2 2  => 6 = size and 2 = all value is 2 
    cout << v.size() << endl;
    cout << v.capacity() << endl;
    // v.push_back(10) ;
    // v.push_back(20) ;
    // v.push_back(30) ;
    // v.push_back(40) ;
    // v.push_back(50) ;
    // v.push_back(60) ;
}