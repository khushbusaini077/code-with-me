//set
#include<bits/stdc++.h>
using namespace std;
void print(){
  set<int>st;
  st.insert(1); //{1}
  st.insert(2); //{1,2}
  st.insert(2); //{1,2}
  st.insert(4); //{1,2,4}
  st.insert(3); //{1,2,3,4}

  //Functionality of insert is vector
  //can be used also,that only increase 
  //efficiency of code,as it is implemented in

  //begin(),end(),rbegin(),rend(),size(),empty(),erase() functions
  //empty() and swap() are same as those at above 

  auto it = st.find(3); //it points to 3
  auto it2 = st.find(6); //it2 points to st.end()
  st.erase(5); //erase 5 //takes logrithmic time complexity
  
  int cnt=st.count(1); //returns 1 if present else 0
  auto it3 = st.find(3);
  st.erase(it3); //erase 3 by iterator

  auto it4 = st.find(2);
  auto it5 = st.find(4);
  st.erase(it4,it5); //erase from 2 to 4 (4 not included)

  auto it6 = st.lower_bound(2); //points to 2
  auto it7 = st.upper_bound(2); //points to 3
  

}
int main() {
  print();
  return 0;
}