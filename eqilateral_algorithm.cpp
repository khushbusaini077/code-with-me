//equilateral algorithm
//GCD(n1,n2)=gcd(n1-n2,n2) [if n1>n2] and continue
#include<bits/stdc++.h>
using namespace std;
void print(int n1,int n2){
  while(n1>0 && n2>0){
    if(n1>n2) n1=n1-n2;
    else n2 = n2-n1;

  }
  if(n1==0) cout<<"GCD:"<<n2;
  else cout<<"GCD:"<<n1;

}
int main(){
  int n1,n2;
  cout<<"Enter first number:";
  cin>>n1;
  cout<<"Enter second number:";
  cin>>n2;
  print(n1,n2);
}

//Time Complexity:- O(log$(min(n1,n2)))