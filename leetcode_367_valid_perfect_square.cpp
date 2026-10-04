#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
        bool isPerfectSquare(int n){
            for(int i=1;i*i<=n;i++){
                if(i*i==n){
                    return true;
                }
            }
            return false;
        }
};

int main(){
    Solution obj;
    int n;
    cin>>n;
    cout<<obj.isPerfectSquare(n)<<endl;
    return 0;
}