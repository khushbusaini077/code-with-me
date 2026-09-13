#include <bits/stdc++.h>
using namespace std;

void print(int n) {
    vector<int> ls;

    for(int i = 1; i <= sqrt(n); i++) {

        if(n % i == 0) {

            ls.push_back(i);

            if(n / i != i) {
                ls.push_back(n / i);
            }
        }
    }

    sort(ls.begin(), ls.end());

    for(auto i : ls) {
        cout << i << " ";
    }
}

int main() {
    int n;

    cout << "Enter the number: ";
    cin >> n;

    print(n);
    //count(n);
}



/*
void count(int n){
  for(int i=1;i<=n;i++){
    if(n%i==0){
      cout<<i<<" ";
    }
  }
}
*/
