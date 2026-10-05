#include<bits/stdc++.h>
using namespace std;
class Solution{
  public:
    int sumOf(string columtitle){
      int ans = 0;
      
      for(int i=0;i<columtitle.size();i++){
        int value = columtitle[i] - 'A' + 1;
        ans = ans*26+value;
      }
      return ans;
    }
};
int main(){
  Solution obj;
  string columtitle;
  cin>>columtitle;
  cout<<obj.sumOf(columtitle)<<endl;
  return 0;
}