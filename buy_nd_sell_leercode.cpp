#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int sell(int arr[],int n){
    int res=0;
     int sum=0;
    for(int i=0;i<n;i++){
       
        for(int j=i+1;j<n;j++){
        sum= arr[j]-arr[i];
        res=max(res,sum);
        }
    }
    
   return res; 
}

int main(){
    int a[]={7,1,5,3,6,4};
    int x=sell(a,6);
    cout<<x<<" ";
    int b[]={3,2,1};
    int d=sell(b,3);
    cout<<d<<" ";
    return 0;
}