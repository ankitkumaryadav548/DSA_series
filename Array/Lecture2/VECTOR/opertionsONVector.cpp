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
    cout << v.size()<< endl;  // 8
    cout << v.capacity()<< endl; // 8
    
    //print all element of vector
    //we can use square bracket[] to access/ print/ update element
    for(int i=0;i<v.size();i++){
        cout << v[i]<< " ";
    }
    cout << endl;
    //pop_back()
    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();
    cout << v.size()<< endl; //3 => size increased or decreased
    cout << v.capacity()<<endl;//8 =>once capacity increaced then it can't be decreased
}