#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum = 0;
        int maxsum = nums[0];
        for(int i=0;i<nums.size();i++){
            sum += nums[i];
            maxsum = max(sum,maxsum);

            if(sum<0){
                sum = 0;
            }
        }
        return maxsum;
    }
};

int main() {
    Solution s;

    vector<int> nums = {1,-2, 2,-1,2,-2, 3, 4};

    cout<<s.maxSubArray(nums);
    return 0;
}