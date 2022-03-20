#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <queue>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    int l,r,s;
    cin>>l>>r;
    for (int i =l;i<=r;i++){
        s=i%2;
        if(s==1){
            cout<<i<<" ";
        }
    }
    
}