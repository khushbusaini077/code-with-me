//check for prime number
#include<bits/stdc++.h>
using namespace std;
void print(int n){
  int count=0;
  for(int i=1;i*i<=n;i++){
    if(n%i==0){
      count++;
      if(n/i !=i){
        count++;
      }
    }

  }
  if(count==2){
    cout<<"Prime number";
  }
  else{
    cout<<"Not a prime number:";
  }
}
int main(){
  int n;
  cout<<"Enter the number:";
  cin>>n;
  print(n);
  return 0;
}
/*
void print(int n){
  int count=0;
  for(int i=1;i<=n;i++){
    if(n%i==0){
      count++;
    }
  }
  if(count==2){
    cout<<"Prime Number";
  }else{
    cout<<"Not a Prime number";
  }
//Time complexity:- O(n)
}
*/