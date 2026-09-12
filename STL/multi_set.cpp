//multiset
#include <bits/stdc++.h>
using namespace std;
void print(){

  //Everything is same as set
  //only store duplicate elements also

  multiset<int> s;
  s.insert(1);
  s.insert(1);
  s.insert(1);
  s.erase(1); //erase all 1's

  int cnt=s.count(1); //count the number of 1's
  s.erase(s.find(1)); //erase only one 1

  s.erase(s.find(1),s.find(1)+2); //erase 2 1's


}
int main(){
  print();
  return 0;
}