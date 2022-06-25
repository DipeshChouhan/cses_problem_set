#include <bits/stdc++.h>
using namespace std;

int main() {
    unsigned long long count;
    cin >> count;

    unsigned long long sum = (count * (count + 1)) / 2;

    --count;
    unsigned long long k;
    while(count--) {
        cin >> k;
        sum -= k;
    }
    cout << sum << '\n';
}
    
