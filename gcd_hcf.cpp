//GCD(greatest common divisor)/HCF(highest common factor)
#include<bits/stdc++.h>
using namespace std;
void print(int n1,int n2){
  int divisor=1;
  for(int i=1;i<=min(n1,n2);i++){
    if(n1%i==0 && n2%i==0){
      divisor=i;
    }
  }
  cout<<"GCD:"<<divisor;

}
int main(){
  int n1,n2;
  cin>>n1;
  cin>>n2;
  print(n1,n2);
}