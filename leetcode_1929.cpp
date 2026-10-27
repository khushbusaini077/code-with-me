///letcode problem 1929 concatenation of array with itself
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> ans;

        for (int x : nums) {
            ans.push_back(x);
        }

        for (int x : nums) {
            ans.push_back(x);
        }

        return ans;
    }
};

int main() {
    Solution s;

    int n;
    cin >> n;

    vector<int> nums(n);

    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    vector<int> result = s.getConcatenation(nums);

    for (int x : result) {
        cout << x << " ";
    }

    cout << endl;
    return 0;
}
