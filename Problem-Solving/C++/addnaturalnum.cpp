#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <queue>
#include <string>
#include <algorithm>
using namespace std;


int main() {
    long long n,b=1,total=0;
    cin>>n;
    int counter=1;
    total= (abs(n-b)+1)*(n+b)/2;    
        cout<<total;
}