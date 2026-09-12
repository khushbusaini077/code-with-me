#include<bits/stdc++.h>
using namespace std;
void explainList(){
  list<int>ls;
  ls.push_back(1);
  ls.emplace_back(2);
  ls.push_front(0);
  ls.emplace_front(-1);
  for(int x : ls){
    cout<<x<<" ";
  }
  //other functions of list
  ls.pop_back();
  ls.pop_front();
  ls.begin();
  ls.end();
  ls.rbegin();
  ls.rend();
  ls.size();
  ls.swap(ls);
  ls.clear();


}
int main(){
    explainList();
    return 0;
}