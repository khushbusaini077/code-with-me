//Deque
#include <bits/stdc++.h>
using namespace std;

void print(){
  deque<int> dq;
  dq.push_back(1); //{1}
  dq.push_back(2); //{1,2}
  dq.emplace_back(3); //{1,2,3}
  dq.push_front(4); //{4,1,2,3}
  dq.emplace_front(5); //{5,4,1,2,3}

  dq.pop_back(); //{5,4,1,2}
  dq.pop_front(); //{4,1,2}
  dq.back(); //2
  dq.front();   //4
  for(int x : dq){
    cout<<x<<" ";
  }
}
int main(){
  print();
  return 0;
}