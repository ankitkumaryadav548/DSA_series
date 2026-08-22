#include<iostream>
using namespace std;
int main(){
    // string => string is character array
    // char str[] = "absmj";  //correct
    char str[] = {'a','b','c','\0','d','e'};  //correct
    // cout << str;
    // in case we don't know size of string then use null character
    // M1
    // for(int i=0;str[i]!='\0';i++){
    //     cout << str[i]  << endl;
    // }

    // // M2
    // for(int i=0;i<5;i++){
    //     cout << str[i] << " ";
    // }
    cout << (int)(str[5]) << endl;   // 101 =>  str[5] = e and ASCII value of e is 101
    char ch = '\0'  ;
    cout << int(ch) ;  // 0 beacuse '\0' is null charcter and it's numerical value is 0
    cout << ch ;  // The second cout technically outputs a character, but '\0' is non-printing/invisible.
}

