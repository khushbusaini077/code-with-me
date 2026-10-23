#include<bits/stdc++.h>
using namespace std;
void display(int n){
  for(int i =1;i<=n;i++){
    for(int j =1;j<=i;j++){
      cout<<j<<" ";
      //cout<<i<<" ";
      
    }
    cout<<"\n";
  }
}

int main(){
  int n;
  cin>>n;
  display(n);

  return 0;
}