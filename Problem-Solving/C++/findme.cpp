#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
vector<int> vec;
int main(){
    int t,k;
    
   
    cin>>t>>k;
    int n= sizeof(vec)/sizeof(vec[0]);
    for(int i=0;i<t;i++){
        int num;
        cin>>num;
        vec.push_back(num);
    }
     if(find(vec.begin(),vec.end(),k)!=vec.end()){
         cout<<"1";
     }
     else
     cout<<"-1";
    
return 0;      
}    
