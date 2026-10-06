//Kids with the Greatest Number of Candies
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> result;
        int maxx = *max_element(candies.begin(), candies.end());
        for(int i=0;i<candies.size();i++){
          if(candies[i]+extraCandies>=maxx){
            result.push_back(true);
          }else{
            result.push_back(false);
          }
        }
        return result;
    }
};

int main() {
    Solution obj;

    int n, extraCandies;
    cin >> n;

    vector<int> candies(n);

    for(int i = 0; i < n; i++) {
        cin >> candies[i];
    }

    cin >> extraCandies;

    vector<bool> result = obj.kidsWithCandies(candies, extraCandies);

    for(bool x : result) {
        cout << x << " ";
    }

    return 0;
}