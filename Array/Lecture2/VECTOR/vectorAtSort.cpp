#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int> v;
    v.push_back(12);
    v.push_back(76);
    v.push_back(23);
    v.push_back(53);
    v.push_back(32);
    v.at(2)=98;
    for(int i=0;i<v.size();i++){
        cout << v.at(i) << " " ; // same
        // cout << v[i] << " " ; // same
    }
    cout << endl;
    //sort
    sort(v.begin(), v.end());
    for(int i=0;i<v.size();i++){
        cout << v.at(i)<< " " ;
    }

}

