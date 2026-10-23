#include<bits/stdc++.h>
using namespace std;

int num=1;
void print1(int n){
  for(int i = 1;i<=n;i++){
  for(int j = 1;j<=i;j++){
    cout<<num;
    num+=1;
  }
  cout<<endl;
}
}

int main(){
  int t;
  cin>>t;
  for(int k=0;k<t;k++){
    int n;
    cin>>n;
    print1(n);
  }



  return 0;
}