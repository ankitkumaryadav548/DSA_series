#include<iostream>
#include <stack>
using namespace std ;
int main(){
    stack<int>st;
    cout << st.size() << endl; //0
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    // cout << st.size()<< endl;  // 5
    st.pop();
    cout << st.top();  // 40
    st.push(100);  
    // How to traverse stack

    while(st.size()>0){
     cout << st.top() << endl;  // 40 30 20 10
     st.pop();   
    }
    
}

