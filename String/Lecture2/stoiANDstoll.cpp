//stoi => string  to integer  (for smaller number)
//stoll => string to long long(for bigger number)

#include<iostream>
#include<string>
using namespace std ;
int main(){

    //string to integer
    string str = "12345";
    int x = stoi(str);
    cout << x << endl;  //12345
    cout << x+1 << endl;//12346

    // previosly done 
    //integer to string by to_string function
    int a = 123456;
    string s = to_string(a);
    cout << s << endl ;

    //string to long long

    string st = "124536786905675";
    long long z = stoll(st);
    cout << z << endl ;

}
