// Find the last occurrence of x in the vector
#include <iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    v.push_back(40);
    v.push_back(20);
    v.push_back(30);

    //Method 1
    // int x = 40;
    // int idx = -1;
    // for(int i=0;i<v.size();i++){
    //     if(v[i]==x) idx = i;
    // }
    // cout << idx ;

    //Method 2
    for (int i = v.size()-1; i >= 0; i--)
    {
        // cout << v[i] << " ";
        if (v[i] == 30)
        {
            cout << i;
            break;
        }

    }
}

