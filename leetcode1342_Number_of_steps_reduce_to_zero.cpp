//1342:- number of steps to reduce a number to zero
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int numberOfSteps(int num) {
        int step = 0;

        while (num > 0) {
            if (num % 2 == 0) {
                num = num / 2;
            } 
            else {
                num = num - 1;
            }

            step++;
        }

        return step;
    }
};
int main(){
    int num;
    cin>>num;
    Solution obj;
    int result = obj.numberOfSteps(num);
    cout<<result;
    return 0;
}