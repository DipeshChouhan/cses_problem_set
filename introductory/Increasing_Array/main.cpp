#include <bits/stdc++.h>
using namespace std;

int main() {

    unsigned int n;
    cin >> n;
    unsigned long long prev;
    cin >> prev;
    --n;
    unsigned long long steps = 0;
    unsigned long long next;
    while(n--) {
        cin >> next;
        if(prev > next) {
            steps += (prev - next);
            next = prev;
        }
        prev = next;
    }
    cout << steps;
}
    
