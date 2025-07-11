#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream fin("input.txt"); // open input.txt for reading

    int n, a, b, c, count = 0;
    fin >> n;

    for (int i = 0; i < n; ++i) {
        fin >> a >> b >> c;
        if (a + b + c >= 2) count++;
    }

    cout << count << endl;
    return 0;
}
