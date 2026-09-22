#include<iostream>
#include<stack>
using namespace std;
int pri(char ch){
    if(ch == '+' || ch == '-') return 1;
    else return 2;
}
int solve(int val1, char ch, int val2){
    if(ch == '+') return val1+val2;
    else if(ch == '-') return val1-val2;
    else if(ch == '*') return val1*val2;
    else return val1/val2;
}
int main(){
    string s = "4+6*4/8-3";
    int n = s.size();
    stack<int>val;
    stack<char>op;
    for(int i=0;i<n;i++){
        //if s[i] == digist means 0-9
        if(s[i] >= 48  && s[i] <= 57){
            val.push(s[i]-48);
        }
        else{ // s[i] => + - * / 
            if(op.size() > 0 && pri(op.top())<s[i]){
                op.push(s[i]);
            }
            else{ // pri(op.top()>=s[i])
                while(op.size() > 0 && pri(op.top())<s[i]){
                    //i have to do val op val
                    char ch = op.top();
                    op.pop();
                    int val2 = val.top();
                    val.pop();
                    int val1 = val.top();
                    val.pop();
                    int ans = solve(val1 , ch , val2);
                    val.push(ans);
                }
                op.push(s[i]);

            }

        }
    }  
    while(op.size()>0){
        //work
        char ch = op.top();
        op.pop();
        int val2 = val.top();
        val.pop();
        int val1 = val.top();
        val.pop();
        int ans = solve(val1 , ch , val2);
        val.push(ans);
    } 
    cout << val.top()<<endl;
    cout << 4+6*4/8-3 ;

}