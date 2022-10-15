#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int large(int a[],int n){
    int res=a[0];
    for(int i=0;i<n;i++){
        int sum=0;
        for(int j=i;j<n;j++){
            sum=sum+a[j];
            res=max(res,sum);
        }
    }
    return res;
}

int main(){
   int a[]={-12,-2,-4,-5};
   int x = large(a,4);
   cout<<x<<endl;
     return 0;
}
