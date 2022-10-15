#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int count(int arr[],int n){
    int count =0;
    for(int i=0;i<n-1;i++)
    {
    for(int j=i+1;j<n;j++){
        if((arr[i]>arr[j]) && j>i){
            count++;
        }
    }
    }
    return count;
}

int main(){
    int arr[]={3,3,3};
    int x= count(arr,3);
    cout<<x<<endl;

    return 0;
}