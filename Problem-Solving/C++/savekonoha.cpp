#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;


int main() {
  int t;
  cin>>t;
  while(t--){
      int n,z,u,cnt=0;
      cin>>n>>z;
      priority_queue<int>vec;
      for(int i=0;i<n;i++){
          int x;
          cin>>x;
          vec.push(x);
      }
      while(z>0){
          cnt+=1;
          z=z-vec.top();
          
          u=vec.top();
          vec.pop();
          if(u/2!=0){
              vec.emplace(u/2);
          }
          if(vec.empty()==1){
              break;
          }
      }
      if(z>0){
          cout<<"Evacuate"<<endl;
      }
      else{
          cout<<cnt<<endl;
      }
  }
    return 0;
    
}
