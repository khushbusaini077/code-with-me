#include<bits/stdc++.h>
using namespace std;
void print(int n){
  int inis = 0;
  //upper pattern
  for(int i = 0; i <n;i++ ){
    //stars
    for(int j=1;j<=n-i;j++){
      cout<<" * ";
    }

    //space
    for(int j=0;j<inis;j++){
      cout<<"   ";
    }

    //stars
    for(int j =1;j<=n-i;j++){
      cout<<" * ";
    }
    inis += 2;
    cout<<endl;
  }


  //down pattern
  inis =2*n-2;
  for(int i=1;i<=n;i++){
    //star
    for(int j =1;j<=i;j++){
      cout<<" * ";
    }

    //space
    for(int j=0;j<inis;j++){
      cout<<"   ";
    }

    //star
    for(int j=0;j<=i;j++){
      cout<<" * ";
    }
    inis -=2;
    cout<<endl;
  }
}


int main(){
  int t;
  cin>>t;
  for(int i =0;i<t;i++){
    int n;
    cin>>n;
    print(n);
  }
}