#include<bits/stdc++.h>
using namespace std;

/*
int main(){
    int n;
    cout<<"Enter the no. of row:"<<endl;
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<"*"<<" ";

        }
        cout<<"\n";
    }

    return 0;
}*/

void display(int n){
    for(int i=0;i<n;i++){
        for(int j = 0;j<n;j++){
            cout<<" *"<<" ";
        }
        cout<<"\n";
    }
}

int main(){
    int n;
    cin>>n;
    display(n);
}