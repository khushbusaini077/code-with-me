#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isuglyNumber(int n) {
        if(n <= 0)
            return false;

        while(n % 2 == 0 || n % 3 == 0 || n % 5 == 0) {
            if(n % 2 == 0)
                n /= 2;
            else if(n % 3 == 0)
                n /= 3;
            else
                n /= 5;
        }

        return n == 1;
    }
};

int main() {
    Solution obj;

    int n;
    cin >> n;

    cout << obj.isuglyNumber(n);

    return 0;
}