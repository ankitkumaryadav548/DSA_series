//revision of all question form string 

// 1. reverse half string 
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

// int main(){
//     string str = "ankitkumaryadav";
//     int n = str.size();
//     reverse(str.begin(),str.begin()+n/2);
//     cout << str;

// }

//2. update string when no. of charcter is even
// int main(){
//     string str = "jfghkjw";
//     int n = str.size();
//     if(n%2==0){
//         str[0] = 'a';
//     }
//     cout << str;
// }

//3. anagram => An anagram means two strings have exactly the same characters with the same frequencies, but possibly in a different order.
// int main(){
//     string s1 = "ankit";
//     string s2 = "nktia";

//     sort(s1.begin(), s1.end());
//     sort(s2.begin(), s2.end());

//     if(s1==s2) cout << "Both word are anagram of each other";
//     else cout << "Both word are not anagram";

// }

//4. count no. of different neighbour 
// int main(){
//     string str = "jhgaaajuwwuuwhsuwsfaaa";
//     int n = str.size();
//     int count = 0;
//     for(int i=1;i<n-1;i++){
//         if(str[i]!=str[i-1] && str[i]!=str[i+1])
//         count ++ ;
//     }
//     cout << count;
// }

//5. find max in string
//steps =>
// convert string into integer using stoi method 
// then find maximum from the integer 
// int main(){
//     string str[5] = {"567","345","3245","242","24354"};
//     int max = stoi(str[0]);
//     int maxS = 0;

//     for(int i=0;i<5;i++){
//         int n = stoi(str[i]);
//         if(n>max) {
//             max = n;
//             maxS = i;
//         }
//     }
//     cout << max << endl;
//     cout << maxS << endl;

// } 

