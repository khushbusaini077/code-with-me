#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        vector<int> ans;

        for (int i = 0; i < nums.size(); i++) {
            int j = nums[nums[i]];
            ans.push_back(j);
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

    vector<int> result = s.buildArray(nums);

    for (int x : result) {
        cout << x << " ";
    }

    cout << endl;
    return 0;
}
