// most occuring word from the sentences

// steps for solving this question
// 1 by using stringstream(ss) we will extract sentenses into word
// 2 then we will store into vector
// 3 then we will sort that vector
// 4 now we will see that previous word is similar to current word or not   means we will compare previous and current word
// 5 now we will count that how many word are similar
// 6 atlast loop we will find which word are similar
#include <iostream>
#include <sstream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    string str = "hey, my name is ankit and i am doing dsa with cpp, dsa is so important for placement";
    // cout << "Enter your sentenses: ";
    // getline(cin , str);
    stringstream ss(str);
    string temp;
    vector<string> v;
    while (ss >> temp)
    {
        v.push_back(temp);
    }
    sort(v.begin(), v.end()); // sorting done
    // printing vector
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << endl;
    }

    int maxcount = 1;
    int count = 1;
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] == v[i - 1])
            count++;
        else
            count = 1;
        maxcount = max(maxcount, count);
    }
    // cout << maxcount << endl;

    count = 1;
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] == v[i - 1])
            count++;
        else
            count = 1;
        if (count == maxcount)
        {
            cout << v[i] << " " << maxcount << endl;
        }
    }
}