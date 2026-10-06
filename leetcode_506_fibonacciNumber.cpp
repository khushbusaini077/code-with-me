#include<bits/stdc++.h>
using namespace std;
class Solution{
  public:
    int fib(int n){
      if(n<=1) return n;
      return fib(n-1)+fib(n-2);
    }
    
};
int main(){
  Solution obj;
  int n;
  cin>>n;
  cout<<obj.fib(n)<<endl;
  return 0;
}

/*
class Solution{
public:
  int fib(int n){
  int a=0;
  int b=1;
  for(int i=0;i<n;i++){
  int c = a+b;
  a = b;
  b = c;}
  return a;
  }
};
*/