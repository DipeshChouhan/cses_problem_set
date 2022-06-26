#include <bits/stdc++.h>
using namespace std;

int main() {
    string str;
    getline(cin, str);

    char prev = str[0];
    int c1 = 1;
    int c2 = 1;

    for (int i = 1; i < str.length(); i++) {
        if (str[i] == prev) {
            ++c2;
        } else {
            prev = str[i];
            c2 = 1;
        }
        if (c2 > c1) {
            c1 = c2;
        }
    }
    cout << c1 << '\n';
}

    
