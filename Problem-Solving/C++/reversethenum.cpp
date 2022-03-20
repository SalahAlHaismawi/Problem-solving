#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int count,num,rnum,snum;
    cin>>count;

    while(count--){
        cin>>num;
        snum=0;
        while(num){
            rnum=num%10;
            snum=snum*10+rnum;
            num=num/10;
        }
    cout <<snum<<endl;
    }

}    