#include <vector>
#include <iostream>
using namespace std;

int main() {

    unsigned long long n = 9;
    while(n != 1) {
        cout << n << ' ';
        if (n & 1) n = (n * 3) + 1;
        else n /= 2;
    }
    cout << n << '\n';

}
    
