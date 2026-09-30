#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void reverseString(vector<char>& s) {
        vector<char> v;

        for(int i = s.size() - 1; i >= 0; i--) {
            v.push_back(s[i]);
        }

        for(int i = 0; i < v.size(); i++) {
            s[i] = v[i];
        }
    }
};

int main() {
    vector<char> s = {'h', 'e', 'l', 'l', 'o'};

    Solution obj;
    obj.reverseString(s);

    for(char c : s) {
        cout << c;
    }

    return 0;
}