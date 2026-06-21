// input a string and update it even position with character 'a' 
#include<iostream>
#include<string>
using namespace std;
int main(){
    string name;
    cout << "Enter your name: ";
    cin >> name;
    for(int i=0; name[i]!='\0';i++){
        if(i%2==0) name[i] = 'a';
    }
    cout << name;
}