//stack
#include <bits/stdc++.h>
using namespace std;
void print(){
  stack<int> st;
  st.push(1); //{1}
  st.push(2); //{1,2}
  st.push(3); //{1,2,3}
  st.emplace(4); //{1,2,3,4}

  cout<<st.top()<<endl; //4
  st.pop(); //{1,2,3}
  cout<<st.top()<<endl; //3
  cout<<st.size()<<endl; //3
  cout<<st.empty()<<endl; //0

  stack<int> st1,st2;
  st1.swap(st2); //swaps st1 and st2
}
int main(){
  print();
  return 0;
}