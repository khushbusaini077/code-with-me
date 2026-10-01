#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isHappy(int n) {
        set<int> seen;

        while (n != 1) {
            if (seen.count(n)) {
                return false;
            }

            seen.insert(n);

            int sum = 0;

            while (n > 0) {
                int digit = n % 10;
                sum = sum + digit * digit;
                n = n / 10;
            }

            n = sum;
        }

        return true;
    }
};

int main() {
    Solution obj;

    int n;
    cin >> n;

    //cout << obj.isHappy(n);
    cout << boolalpha << obj.isHappy(n);

    return 0;
}