#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
  int n;
  cin>>n;
   
    //looping rows
    for(int i=n; i>0; i--)
    {
      for(int j=0; j<=n; j++) //looping columns
      {
        if (j>=i)
        {
          cout<<"*";
        }
        else
        {
          cout<<" ";
        }
      }
      cout<<endl;
    }

return 0;      
}    
