#include<iostream>
#include<vector>
using namespace std;

void change(vector<int>& a ){    // vector<int>& a 
    a[0] = 90;
    for(int i=0;i<a.size();i++){ //by using & we are able to pass by address
        cout << a[i] << " ";
    }
    cout << endl;  //vector are passed by value => each time we pass , a new vector is created
}
// void change(vector<int> a ){    //vector<int> a 
//     a[0] = 90;
//     for(int i=0;i<a.size();i++){
//         cout << a[i] << " ";
//     }
//     cout << endl;    //vector are passed by value
// }
int main(){
    vector<int> v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    v.push_back(50);
    for(int i=0;i<v.size();i++){
        cout << v[i] << " ";
    }
    cout << endl;
    change(v);
    for(int i=0;i<v.size();i++){
        cout << v[i] << " ";
    }
    cout << endl;
}

