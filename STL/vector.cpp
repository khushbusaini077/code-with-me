//vector 
#include<bits/stdc++.h>
using namespace std;
void explainVector(){
  vector<int>v;
  v.push_back(1);
  v.emplace_back(2);
  v.push_back(3);
  v.push_back(4);
  v.push_back(5);

  vector<pair<int,int>>vec;
  vec.push_back({1,2});
  vec.emplace_back(3,4);

  vector<int>p(5,100); //{100,100,100,100,100}
  vector<int>q(5); //{0,0,0,0,0}
  vector<int>v1(5,20); //{20,20,20,20,20}
  vector<int>v2(v1); //copy v1 vector into v2 vector


  //print the values of vector
  vector<int>::iterator it = v.begin();
  it++;
  cout<<*(it)<<" ";
  it +=2;
  cout<<*(it)<<" ";

  //vector<int>::iterator it=v.end();
  //vector<int>::iterator it=v.rend();
  //vector<int>::iterator it=v.rbegin();
  
  cout<<v[0]<<" "<<v.at(0);
  cout<<v.back()<<" ";

  for(vector<int>::iterator i=v.begin();i != v.end();i++){
    cout<<*(i)<<" ";
  }



  for(auto s = v.begin();s !=v.end();s++){
    cout<<*(s)<<" ";
  }


  for(auto is:v){
    cout<<is<<" ";
  }

  //delete a vector
  v.erase(v.begin()+1);
  v.erase(v.begin()+2,v.begin()+4);


  //Insert
  vector<int>k(2,100); //{100,100}
  p.insert(v.begin(),300); //{300,100,100}
  p.insert(v.begin()+1,2,10); //{300,10,10,100,100}
  

  vector<int>copy(2,50); //{50,50}
  p.insert(k.begin(),copy.begin(),copy.end()); //{50,50,300,,10,10,100,100}

  cout<<v.size();
  v.pop_back();

  v1.swap(v2);
  v.clear(); //erase the entire vector
  cout<<v.empty();




}

int main(){
  explainVector();
  return 0;
}