#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v;
    v.push_back(10) ;
    v.push_back(20) ;
    v.push_back(30) ;
    v.push_back(40) ;
    v.push_back(50) ;
    v.push_back(60) ;
    v.push_back(70) ;
    v.push_back(80) ;
    v.push_back(10) ;
    v.push_back(20) ;
    v.push_back(30) ;
    v.push_back(40) ;
    v.push_back(50) ;
    v.push_back(60) ;
    v.push_back(70) ;
    v.push_back(80) ;
    cout << v.size()<< endl;  // 16
    cout << v.capacity()<< endl; // 16

    //pop_back()
    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();
    cout << v.size()<< endl; //11 => size increased or decreased
    cout << v.capacity()<<endl;//16=>once capacity increaced then it can't be decreased
}