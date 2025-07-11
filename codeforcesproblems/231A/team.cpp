/*
### flashcard template (problem title)
- tool:
- big(o):
- given input parameters:
- chain of logic:take input.txt, 'n' takes lines and make variables, update count when condition met, return count.
- how it works:
- notes and rules: main function, fstream used to take input,
- entire code blocks used:
*/

#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream fin("input.txt"); 

    int n, a, b, c, count = 0;
    fin >> n;

    for (int i = 0; i < n; ++i) {
        fin >> a >> b >> c;
        if (a + b + c >= 2) count++;
    }

    cout << count << endl;
    return 0;
}
