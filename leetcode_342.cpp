#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isPowerOfFour(int n) {
        if (n <= 0)
            return false;

        while (n % 4 == 0)
            n = n / 4;

        if (n == 1)
            return true;
        else
            return false;
    }
};

int main(){
  Solution obj;
  int n;
  cin>>n;
  cout<<obj.isPowerOfFour(n)<<endl;
  return 0;
}