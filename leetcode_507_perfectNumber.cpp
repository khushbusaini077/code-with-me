//Leet code problem of perfect number
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool checkPerfectNumber(int num) {
        
        int sum=0;
        for(int i=1;i<num;i++){
            if(num%i==0){
                sum = sum+i;
            }
        }
        return sum==num;
    }
};
int main(){
    Solution obj;
    int num;
    cin>>num;
    cout<<obj.checkPerfectNumber(num)<<endl;
    return 0;
}