//sets store unique value
//insertion , deletion , traverse => 0(1);
#include <iostream>
#include<unordered_set>
using namespace std;
int main(){
    unordered_set<int>s;
    s.insert(10);
    s.insert(20);
    s.insert(30);
    s.insert(40);
    s.insert(50);
    s.insert(50);
    s.insert(60);
    s.erase(10);  // to delete val;
    // to display we use for-each loop
    cout << s.size() << endl ;  // 60 50 10 20 30 40 
    for(int ele : s){    //
        cout << ele << " ";
    }
    cout << endl;

    // to check target value exits or not
    int target = 40;
    if(s.find(target) != s.end()) {  // target exists
        cout << "target exits" ;
    }
    // s.find(target) == s.end()  => target not exits
    else cout << "target does not exits";
}





