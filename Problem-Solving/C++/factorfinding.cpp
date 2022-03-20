#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n,i;
    int cnt=0;
    cin>>n;
      for (int i = 1; i <= sqrt(n); i++) { 
        if (n % i == 0) { 
            // If divisors are equal, 
            // count only one 
            if (n / i == i) 
                cnt++; 
  
            else // Otherwise count both 
                cnt = cnt + 2; 
       
         } 

      } 
      cout<<cnt<<endl;          
        for(int i=1; i <=n; ++i){
        
                           
            if(n %i == 0){
                cout<<i<<" ";
            }   
            
        }  
   return 0;
}