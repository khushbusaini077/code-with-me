#include<bits/stdc++.h>
using namespace std;
int count(int n){
  int original = n;
  int rev=0;
  while(n>0){
    int digit=n%10;
    rev=rev+(digit*digit*digit);
    n = n/10;
  }
  if(rev==original) cout<<"Armstrong number";
  else cout<<"Not armstrong number";
}

int main(){
  int n;
  cin>>n;
  count(n);
}