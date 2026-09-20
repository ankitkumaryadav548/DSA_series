#include <iostream>
#include <stack>
using namespace std;

void displayRec(stack<int>& st ){  // display in normal way
    if(st.size()==0) return ;
    int x = st.top();
    st.pop();
    displayRec(st);
    cout << x << " ";
    st.push(x);

}
void displayRecRev(stack<int>& st ){ // display in reverse way
    if(st.size()==0) return ;
    int x = st.top();
    cout << x << " ";
    st.pop();
    displayRecRev(st);
    st.push(x);
}
void pushAtButtom(stack<int>& st , int n){ // display in reverse way
    if(st.size()==0){
        st.push(n);
        return;
    } 
    int x = st.top();
    st.pop();
    pushAtButtom(st , n);
    st.push(x);
}
//reverse stack using pushAtButtom function
void reverse(stack<int> &st){ // recursively reverse stack 
    if(st.size()==1) return;
    int x = st.top();
    st.pop();
    reverse(st);
    pushAtButtom(st , x);
}
int main(){
    stack<int>st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);

    displayRec(st);  //  10 20 30 40 50
    cout << endl;
    // displayRecRev(st);  // 50 10 20 30 40
    // cout << endl;
    // pushAtButtom(st , 100);
    // cout << endl;
    // displayRec(st);
    cout << endl;
    reverse(st);
    displayRec(st);  //  50 40 30 20 10

}