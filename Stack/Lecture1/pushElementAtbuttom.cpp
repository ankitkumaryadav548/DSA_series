// reverse stack using two extra stack
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

void pushAtBottom(stack<int>& st, int x)
{
    stack<int> temp;

    while (!st.empty())
    {
        temp.push(st.top());
        st.pop();
    }

    st.push(x);

    while (!temp.empty())
    {
        st.push(temp.top());
        temp.pop();
    }
}
int main()
{
    stack<int> st;
    stack<int> temp;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    print(st) ;
    cout << endl;
    pushAtBottom(st , 100);
    print(st);
   
}