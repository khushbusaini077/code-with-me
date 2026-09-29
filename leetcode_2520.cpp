#include <bits/stdc++.h>
using namespace std;

int print(int n) {
    int original = n;
    int count = 0;

    while (n > 0) {
        int digit = n % 10;

        if (digit !=0 && original % digit == 0) {
            count++;
        }

        n = n / 10;
    }

    return count;
}

int main() {
    int n;
    cin >> n;

    cout << print(n);

    return 0;
}