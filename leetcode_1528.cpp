
#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        string result(s.size(), ' ');

        for (int i = 0; i < indices.size(); i++) {
            result[indices[i]] = s[i];
        }

        return result;
    }
};

int main() {
    Solution sol;

    string s = "abc";
    vector<int> indices = {2, 0, 1};

    cout << sol.restoreString(s, indices) << endl;

    return 0;
}
