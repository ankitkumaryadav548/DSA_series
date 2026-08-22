//return index of string which has maximum value

//steps to solve
//1. convert string to integer
//2. then find maximum element from the integer array
//3. at last print which string is maximum


// #include<iostream>
// #include<string>
// using namespace std;
// int main(){
//     string s[] = {"123","00234","34","00076"};
//     int max = stoi(s[0]);
//     string maxS = s[0];
//     for(int i=0;i<4;i++){
//         int n = stoi(s[i]);
//         if(n>max){
//             max = n;
//             maxS = s[i];
//         }
//     }
//     cout << max << endl;
//     cout << maxS << endl;
// }

//practise 1

// #include<iostream>
// #include<string>
// using namespace std;
// int main(){
//     string s[] = {"865","8610","007564","4011","000000654"};
//     int max = stoi(s[0]);
//     int maxS = 0;
//     for(int i=0;i<5;i++){
//         int n = stoi(s[i]);
//         if(n>max) {
//             max = n ;
//             maxS = i;
//         }
//     } 
//     cout << max << endl;
//     cout << maxS << endl;
// }

// practise => return index largest element from the string

#include <iostream>
#include <string>
using namespace std;
int main(){
    string str[] = {"12343","12345","2345","7645","56789"};
    // int n = str.size();
    int max = stoi(str[0]) ;
    int maxS = 0 ;  // index
    for(int i=0;i<5;i++){
        int n = stoi(str[i]) ;
        if(n>max){
            max = n;
            maxS = i;
        }

    }
    cout << max << endl;
    cout << maxS;
    return 0;

}


