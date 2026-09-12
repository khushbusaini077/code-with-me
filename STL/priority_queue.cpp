//priority queue
#include <bits/stdc++.h>
using namespace std;
void print(){
  priority_queue<int> pq;
  pq.push(10); //{10}
  pq.push(20); //{20,10}
  pq.push(30); //{30,20,10}
  pq.emplace(40); //{40,30,20,10}

  cout<<pq.top()<<endl; //40
  pq.pop(); //{30,20,10}
  cout<<pq.top()<<endl; //30

  //size swap empty functions same as other containers

  //Minimum heap
  priority_queue<int,vector<int>,greater<int>> ps;
  ps.push(10); //{10}
  ps.push(20); //{10,20}
  ps.push(30); //{10,20,30}
  ps.emplace(5); //{5,10,20,30}

  cout<<ps.top()<<endl; //5
}

int main() {
  print();
  return 0;
}