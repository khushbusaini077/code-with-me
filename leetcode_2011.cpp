//leetcode problem 2011 in which to give the final result after performing some operatoins
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int x = 0;

        for(int i = 0; i < operations.size(); i++) {
            if(operations[i] == "++X" || operations[i] == "X++") {
                x++;
            }
            else {
                x--;
            }
        }

        return x;
    }
};

int main() {
    Solution s;

    vector<string> operations = {"--X", "X++", "X++"};

    cout << s.finalValueAfterOperations(operations) << endl;

    return 0;
}