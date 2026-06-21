//input a string of even length and reverse the first half of the string 
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string n;
    cout << "Enter String: ";
    cin >> n;
    int a = n.size();
    if(a%2==0){
        // reverse(n.begin(),n.end()-a/2);  // correct/same
        reverse(n.begin(),n.begin()+a/2); // correct/same
        cout << n;
    }
}

