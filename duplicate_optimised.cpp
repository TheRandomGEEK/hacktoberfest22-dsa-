#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int dup(int a[],int n){
    map<int,int> m;
    for(int i=0;i<n;i++){
        m[a[i]]++;
    }
    for(auto it=m.begin();it!=m.end();it++){
        if((it->second)>1 ){
            return it->first ;
        }
    }
    return -1;
}
int main(){
    int a[]={3,6,7,8,7,9};
  int x=  dup(a,6);
  cout<<x;
    return 0;
}