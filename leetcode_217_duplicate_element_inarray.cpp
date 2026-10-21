#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> seen;

        for(int i = 0; i < nums.size(); i++) {
            if(seen.find(nums[i]) != seen.end()) {
                return true;
            }
            seen.insert(nums[i]);
        }

        return false;
    }
};
int main() {
    Solution s;

    int n;
    cin >> n;

    vector<int> nums(n);

    for(int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    cout << boolalpha << s.containsDuplicate(nums) << endl;

    return 0;
}