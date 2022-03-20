#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int a,b,c;
    cin>>a>>b>>c;
    int area=(a+b+c)/2;
    if(area>0&&a+b>c&&a+c>b&&b+c>a)
    cout<<"YES";
    else
    cout<<"NO";
    
   

return 0;      
}    
