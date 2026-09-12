#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int subtractProductAndSum(int n) {
        int sum = 0;
        int product = 1;

        while (n > 0) {
            int digit = n % 10;
            sum = sum + digit;
            product = product * digit;
            n = n / 10;
        }

        return product - sum;
    }
};

int main() {
    int n;
    cin >> n;

    Solution obj;

    int result = obj.subtractProductAndSum(n);

    cout << result << endl;

    return 0;
}