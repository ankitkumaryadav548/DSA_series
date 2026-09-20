#include <iostream>
#include <stack>
using namespace std;
int main()
{
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    // cout << st.size() << endl; // 5

    // How to traverse stack
    // while (st.size() > 0)
    // {
    //     cout << st.top() << endl; // 50 40 30 20 10
    //     st.pop();
    // }
    // how to getback element  after printing / popping
    //  we will take extra temp stack
    // stack<int> temp;
    // while (st.size() > 0)
    // {
    //     cout << st.top() << endl;
    //     temp.push(st.top());
    //     st.pop();
    // }
    // while (temp.size() > 0)
    // {
    //     st.push(temp.top());
    //     temp.pop();
    // }
    // cout << endl << st.top();

    //printing element in reverse order
    // stack<int>temp;
    // while(st.size()>0){
    //     temp.push(st.top());
    //     st.pop();
    // }
    // while(temp.size()>0){
    //     cout << temp.top() << endl;  // 10 20 30 40 50
    //     st.push(temp.top());
    //     temp.pop();
    // }
    //revrse stack using 2 extra stack
    stack<int>temp;
    stack<int>p;
    while(st.size()>0){
     temp.push(st.top());
     st.pop();   
    }
    while(temp.size()>0){
     p.push(temp.top());
     temp.pop();   
    }
    while(p.size()>0){
        st.push(p.top());
        cout << st.top() << endl;
        p.pop();   
    }
  

}
