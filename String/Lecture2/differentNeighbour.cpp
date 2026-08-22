// //write programme to find that how many character have their different neighbour
// //Count characters whose left and right neighbours are different from the character itself.
// #include<iostream>
// #include<string>
// using namespace std ;
// int main(){
//     string s;
//     cout << "Enter string: ";
//     cin >> s;
//     int count = 0;
//     int n = s.length();
//     for(int i=0;i<n;i++){
//         if(n==1) break;   // base condition
//         if(n==2 && s[0]!=s[1]){
//             count ++;
//             break;
//         }
//         if(i==0){
//             if(s[i]!=s[i+1]) count++ ;
//         }
//         else if(i==n-1){
//             if(s[i]!=s[i-1]) count++ ;
//         }
//         else if(s[i]!=s[i+1] && s[i]!=s[i-1])
//             count ++ ;
//     }
//     cout << count ;
// }

//optimised code
#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;

    int count = 0;
    int n = s.length();

    for(int i = 1; i < n - 1; i++) {
        if(s[i] != s[i-1] && s[i] != s[i+1]) {
            count++;
        }
    }

    cout << count;

    return 0;
}