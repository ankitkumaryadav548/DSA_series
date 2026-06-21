//return the total number of digits in a number without using loop 
//use to_string
#include<iostream>
#include <string>
using namespace std ;
int main(){
    int x = 124316327;
    string n = to_string(x);
    cout << x << endl << n.size() ; 
}
