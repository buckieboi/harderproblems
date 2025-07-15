/*
4
word
localization
internationalization
pneumonoultramicroscopicsilicovolcanoconiosis

*/


#include <iostream>
using namespace std;

string tooLong(string s) {
    if (s.length() > 10) {return s[0] + to_string(s.length() - 2) + s.back();}
    else {return s;}
}

int main() {
    int n;
    cin >> n;
    string word;
    while (n--) {
        cin >> word;
        cout << tooLong(word) << endl;
    }
    return 0;
}

