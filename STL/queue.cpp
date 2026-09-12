//Queue:-lifo (last in first out)
#include <iostream>
using namespace std;
void print(){
  queue<int> q;
  q.push(1); //{1}
  q.push(2); //{1,2}
  q.push(3); //{1,2,3}
  q.emplace(4); //{1,2,3,4}

  q.back(); //4
  cout<<q.back()<<endl; //prints 4
  cout<<q.front()<<endl; //prints 1
  q.pop(); //{2,3,4}
  cout<<q.front()<<endl; //prints 2

  //size swap empty same as stack
}

int main() {
  print();
  return 0;
}

//time complexity:-
//push-O(log(n))
//pop-O(log(n))
//top-O(1)
