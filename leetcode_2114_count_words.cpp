//Leetcode problem 2114 to count the maximum length of words
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int maxWords = 0;

        for(int i = 0; i < sentences.size(); i++) {
            int count = 1;

            for(int j = 0; j < sentences[i].size(); j++) {
                if(sentences[i][j] == ' ') {
                    count++;
                }
            }

            if(count > maxWords) {
                maxWords = count;
            }
        }

        return maxWords;
    }
};

int main() {
    Solution s;

    vector<string> sentences = {
        "alice and bob love leetcode",
        "i think so too",
        "this is great thanks very much"
    };

    cout << s.mostWordsFound(sentences) << endl;

    return 0;
}