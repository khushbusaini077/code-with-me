//Leetcode problem 728 selfDividing number// 
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> ans;

        for(int i = left; i <= right; i++) {
            int num = i;
            bool flag = true;

            while(num > 0) {
                int digit = num % 10;

                if(digit == 0 || i % digit != 0) {
                    flag = false;
                    break;
                }

                num /= 10;
            }

            if(flag)
                ans.push_back(i);
        }

        return ans;
    }
};
int main(){
    Solution obj;
    int left, right;
    cin >> left >> right;

    vector<int> ans = obj.selfDividingNumbers(left, right);

    for(int x : ans){
        cout << x << " ";
    }


    return 0;
}