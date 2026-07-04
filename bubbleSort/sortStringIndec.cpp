//sort string in descending order

// Given a string consisting of uppercase English letters, extract all characters that are lexicographically greater than 'X', and then sort the extracted characters using the Bubble Sort algorithm. Finally, print the sorted characters separated by spaces.

#include<iostream>
using namespace std;
int main(){
    string s = "AJYZSDXBMZVY";
    string str = "";
    for(int i=0;i<s.length();i++){
        if(s[i]>'X'){
            str.push_back(s[i]);
        }
    }
    // cout << str;
    int n = str.length();

    for(int i=0;i<=n-1;i++){
        //traverse
        // for(int j=0;j<=n-1;j++){
        bool flag = true;
        for(int j=0;j<=n-1-i;j++){  // most efficient to include (n-1-i)
            if(str[j]>str[j+1]){  //swap
                int temp = str[j];
                str[j] = str[j+1];
                str[j+1] = temp ;
                flag = false;
                // swap(arr[j],arr[j+1]);  //sortcut

            }
        }
        if(flag==true){  // means swap didn't happen
            break;
        }
    }
    for(int i=0;i<n;i++){
        cout << str[i]<< " ";
    }
}