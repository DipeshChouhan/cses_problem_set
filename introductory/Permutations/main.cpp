#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    
    if (n  == 2 || n == 3) {cout << "NO SOLUTION"; return 0;}
    if (n == 4) {
        cout << 2 << ' ' << 4 << ' ' << 1 << ' ' << 3;
        return 0;
    }

    int count = 1;
    while(count <= n) {
        cout << count << ' ';
        count += 2;
    }
    count = 2;
    while(count <= n) {
        cout << count << ' ';
        count += 2;
    }
    
}
    
