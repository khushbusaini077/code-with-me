#include<bits/stdc++.h>
using namespace std;
void display(int n){
    for(int i=0;i<n;i++){
        for(int j = 0;j<n;j++){
            cout<<" *"<<" ";
        }
        cout<<"\n";
    }
}
void display1(int n){
  for(int i=0;i<n;i++){
    for(int j=0;j<=i;j++){
      cout<<" * ";
    }
    cout<<endl;
  }
}
void display2(int n){
  for(int i=1;i<=n;i++){
    for(int j=1;j<=i;j++){
      cout<<j<<" ";
    }
    cout<<endl;
  }
}
void display3(int n){
  for(int i=1;i<=n;i++){
    for(int j=1;j<=i;j++){
      cout<<i<<" ";
    }
    cout<<endl;
  }
}
void display4(int n){
  for(int i=0;i<n;i++){
    for(int j=1;j<=n-i;j++){
      cout<<" * ";
    }
    cout<<endl;
  }
}
void display5(int n){
  for(int i=0;i<n;i++){
    for(int j=0;j<n-i-1;j++){
      cout<<" ";
    }

    for(int j=0;j<2*i+1;j++){
      cout<<"*";
    }
    for(int j=0;j<n-i-1;j++){
      cout<<" ";
    }
    cout<<endl;
  }
}
void display6(int n){
  for(int i=0;i<n;i++){
    //space 
    for(int j=0;j<i;j++){
      cout<<" ";
    }
    //star
    for(int j=0;j<2*n-(2*i+1);j++){
      cout<<"*";
    }
    //space 
    for(int j=0;j<i;j++){
      cout<<" ";
    }
    cout<<endl;
  }
}






int main(){
    int n;
    cin>>n;
    //display(n);
    //display1(n);
    //display2(n);
    //display3(n);
    //display4(n);
    //display5(n);
    display6(n);

}