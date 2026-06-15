#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v;
    // size() => Number of elements currently stored
    // capacity() => Number of elements that can be stored without reallocating memory
                    // vector want to double it's capacity
    v.push_back(12);  //recommended to use push_back
    cout << v.size() << endl;
    cout << v.capacity() << endl;
    v.push_back(76);
    cout << v.size() << endl;
    cout << v.capacity() << endl;
    v.push_back(23);
    cout << v.size() << endl;
    cout << v.capacity() << endl;
    v.push_back(56);
    cout << v.size() << endl;   
    cout << v.capacity() << endl;
    v.push_back(34);
    cout << v.size() << endl;   
    cout << v.capacity() << endl;
    // v[0]=23;  // not valid
    // v[1]=43;

    //to update or access
    v[2]=20;
    cout << v[0]<< " ";
    cout << v[1]<< " ";
    cout << v[2]<< " ";
    cout << v[3]<< " ";
    cout << v[4]<< " ";

}