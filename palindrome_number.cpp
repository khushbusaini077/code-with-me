//Palindrome number
#include<bits/stdc++.h>
using namespace std;
void count(int x){
    int original = x;
    int rev = 0;
    while(x>0){
        int digit = x%10;
        rev = (rev*10) + digit;
        x=x/10;
    
        
    }
    if(rev==original){
        cout<<"Palindrome number";
    }else{
        cout<<"Not a palindrome number";
    }
}

int main(){
    int x;
    cin>>x;
    count(x);
}