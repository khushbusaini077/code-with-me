#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isPowerOfTwo(int n) {
        if (n <= 0)
            return false;

        while (n % 2 == 0)
            n = n / 2;

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
  cout<<obj.isPowerOfTwo(n)<<endl;
  return 0;
}