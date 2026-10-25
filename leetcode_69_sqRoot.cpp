
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int mySqrt(int x) {
        return solve(x, 1);
    }

    int solve(int x, int i) {
        if (x < 2)
            return x;

        if (i > x / i)
            return i - 1;

        return solve(x, i + 1);
    }
};

int main() {
    Solution s;

    int x;
    cout << "Enter a number: ";
    cin >> x;

    cout << "Square root: " << s.mySqrt(x) << endl;

    return 0;
}
