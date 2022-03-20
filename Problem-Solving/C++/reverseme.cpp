#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <queue>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    int t;
    cin>>t;
    int arr[t];
    int size= sizeof(arr)/sizeof(arr[0]),temp=0;
   int l=0;
   int j=size- 1;
    for(int i=0;i<t;i++){

        cin>>arr[i];       
    }
    while(l<j){
        temp = arr[l];
        arr[l]=arr[j];
        arr[j]=temp;
        l++;
        j--;
        
    }
    for(int i;i<t;i++){
            cout<<arr[i]<<" ";
        }



  return 0;      
}