#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    double myPow(double x, int n) {
        long long p = n;
        long double ans = 1;
        long double base = x;

        if(p < 0) {
            base = 1 / base;
            p = -p;
        }

        while(p > 0) {
            if(p % 2 == 1)
                ans *= base;

            base *= base;
            p /= 2;
        }

        return (double)ans;
    }
};
int main(){
    Solution obj;
    double x;
    int n;
    cin>>x;
    cin>>n;
    cout<<obj.myPow(x,n)<<endl;

    return 0;
}