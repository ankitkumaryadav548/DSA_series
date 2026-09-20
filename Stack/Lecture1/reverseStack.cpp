//reverse stack using two extra stack
#include <iostream>
#include <stack>
using namespace std;

void print(stack<int> st){
    stack<int> temp;
    while(st.size()>0){
    temp.push(st.top());
    st.pop();   
    }
    while(temp.size()>0){
        st.push(temp.top());
        cout << st.top() << " " ;
        temp.pop();
    }
    cout << endl;

}
int main()
{
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    print(st);
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
        p.pop();   
    }
    cout << endl;
    print(st);

}
