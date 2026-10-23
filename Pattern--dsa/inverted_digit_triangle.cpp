#include<bits/stdc++.h>
using namespace std;
void display(int n){
  for(int i =1;i<=n;i++){
    for(int j =1;j<=n-i;j++){
      cout<<j<<" ";
    }
    cout<<"\n";
  }
}

int main(){
  //int n;
  //cin>>n;
  //display(n);

  int t;
  cin>>t;
  for(int i =0;i<t;i++){
    int n;
    cin>>n;
    display(n);
  }
}