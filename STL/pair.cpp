//Utility library

#include<bits/stdc++.h>
using namespace std;
void explainPair(){
  pair<int,int>p={1,2};
  cout<<p.first<<" "<<p.second;

  pair<int,pair<int,int>>q={1,{2,3}};
  cout<<q.first<<" "<<q.second.second<<" "<<q.second.first;

  pair<int,int>arr[]={{1,2},{3,4}};
  cout<<arr[1].second;
}

int main(){
  explainPair();
  return 0;
}