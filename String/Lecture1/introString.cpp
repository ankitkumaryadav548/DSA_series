#include<iostream>
using namespace std;
int main(){
    // string => string is character array
    // char str[] = "absmj";  //correct
    char str[] = {'a','b','c','\0','d','e'};  //correct
    cout << str;
    // in case we don't know size of string then use null character
    // M1
    for(int i=0;str[i]!='\0';i++){
        cout << str[i] << " ";
    }

    // M2
    // for(int i=0;i<5;i++){
    //     cout << str[i] << " ";
    // }
    // cout << (int)(str[5]) << endl;
    // char ch = '\0'  ;
    // cout << int(ch) ;
    // cout << ch ;
}

