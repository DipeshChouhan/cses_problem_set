#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cin >> n;

    unsigned long long row, col;
    while(n--) {
        cin >> row >> col;
        if (row & 1) {
            if (col <= row) {
                cout << row * row - (((row * 2) - 2) - (col - 1)) << '\n';
            } else {
                if (col & 1) {
                    cout << (col * col) - (row - 1) << '\n';
                } else {
                    cout << (col * col - ((col * 2) - 2)) + (row - 1) << '\n';
                }
            }
        } else {
            if (col <= row) {
                cout << (row * row) - (col - 1) << '\n';
            } else {
                if (col & 1) {

                    cout << (col * col) - (row - 1) << '\n';
                } else{
                    cout << (col * col - ((col * 2) - 2)) + (row - 1) << '\n';
                }
            }
        }
    }
}
    
