// input a string of length n and count all the vowel in the given string
#include<iostream>
#include<string>
using namespace std ;  

int main() {
    string str;

    cout << "Enter a string: ";
getline(cin, str);     // it will take input to whole text including space when we
                        // press enter then it will stop taking input



    int count = 0;

    for(int i = 0; i < str.size(); i++) {
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' ||
           str[i]=='o' || str[i]=='u' ||
           str[i]=='A' || str[i]=='E' || str[i]=='I' ||
           str[i]=='O' || str[i]=='U') {
            count++;
        }
    }

    cout << "Number of vowels = " << count;

    return 0;
}

// Following is wrong code 

#include <iostream>
#include <string>
using namespace std;

int main(){
        string str = "ankitkumaryadav";
        int n = str.size();
        int count = 0;
        for(int i=0;i<n;i++){
            if(str[i]== 'a'||'e'||'i'||'o'||'u')
            count ++ ;
        }
        cout << "no. of vowels are: " << count ;
        return 0;
}

// str[i]== 'a'||'e'||'i'||'o'||'u' => this codition is wrong 
// why our condition does't work because 
// C++ does not automatically compare str[i] with every character.
// C++ interprets it roughly as:
// (str[i] == 'a') || ('e') || ('i')
// Characters like 'e' and 'i' have non-zero ASCII values, so they are treated as true.
// Therefore, your condition effectively becomes always true, and count gets incremented for every character and count will count all character 

