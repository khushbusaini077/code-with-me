#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minimizeString(string s) {
        int hash[26] = {0};

        for (int i = 0; i < s.size(); i++) {
            hash[s[i] - 'a']++;
        }

        int count = 0;

        for (int i = 0; i < 26; i++) {
            if (hash[i] > 0) {
                count++;
            }
        }

        return count;
    }
};

int main() {
    Solution obj;

    string s;
    cin >> s;

    cout << obj.minimizeString(s) << endl;

    return 0;
}