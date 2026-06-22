//stringstream is a class in C++ (from the <sstream> header) that allows you to treat a string like an input/output stream, similar to how cin and cout work.

// 1. Converting a string into numbers
#include <iostream>
#include <sstream>
using namespace std;

int main() {
    string s = "123";
    stringstream ss(s);

    int x;
    ss >> x;

    cout << x + 1;
}

// Output:
// 124


// 2. Extracting words from a sentence
#include <iostream>
#include <sstream>
using namespace std;

int main() {
    string s = "I love C++";
    stringstream ss(s);

    string word;

    while(ss >> word) {
        cout << word << endl;
    }
}

// Output:
// I
// love
// C++

// 3. Converting numbers to strings
#include <iostream>
#include <sstream>
using namespace std;

int main() {
    int x = 100;

    stringstream ss;
    ss << x;

    string s = ss.str();

    cout << s;
}

// Output:
// 100

// 4. Parsing comma-separated values

// For CSV-like data:

#include <iostream>
#include <sstream>
using namespace std;

int main() {
    string s = "apple,banana,mango";

    stringstream ss(s);
    string item;

    while(getline(ss, item, ',')) {
        cout << item << endl;
    }
}

// Output:
// apple
// banana
// mango

// Useful Functions
// Function	                    Purpose
// ss >> x  =>                   Read data from stringstream
// ss << x =>                   Write data into stringstream
// ss.str() =>                  Get the string stored inside
// ss.str(s) =>                 Replace contents with string s
// getline(ss, word, delim) =>  Read until delimiter

