#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int countOdds(int low, int high) {
      return (high+1)/2 - low/2;
    }
};

int main(){
  Solution s;
  int low;
  cin>>low;
  int high;
  cin>>high;
  cout<<s.countOdds(low,high)<<endl;
  return 0;
}


/*
class Solution {
public:
    int countOdds(int low, int high) {
              int count = 0;
        for(int i=low;i<=high;i++){
          if(i%2!=0){
            count++;
          }
        }
        return count;

    }
};


*/