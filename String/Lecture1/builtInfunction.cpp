#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){

    //1.length()
    // string str = "your are studing String ";
    // cout << str.size(); // same
    // cout << str.length(); // same

    //2.push_back
    // string name = "Ankit";
    // name.push_back('e'); // correct => onlu one character at a time 
    // // name.push_back('esj'); // not correct => not multiple character
    // cout << name << endl;

    //3.pop_back;
    // name.pop_back();
    // name.pop_back();
    // cout <<name <<endl;

    // //4.add(+)
    // string a = "abc";
    // string b = "def";
    // cout << b + "gsjd" << endl;
    // cout << a + b + "jsdh" ;

    //5.reverse()
    string str = "ankit";
    reverse(str.begin(),str.end());
    cout << str ;

}