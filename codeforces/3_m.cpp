
Codeforces Less or Equal 977C
programming blog Sunday, May 06, 2018 0

A solution in c++

#include<bits/stdc++.h>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<algorithm>

using namespace std;

int main(){
    long long int a=0,b=0,c,d,i,j,n,m,ck=0;
    cin>>n>>m;
    long long  arr[n];
    for(i=0; i<n; i++){
         cin>>arr[i];
        }
        sort(arr, arr+n);
        m--;
        if(m<0){
            if(arr[0]>1) cout<<"1"<<endl;
            else cout<<"-1"<<endl;
            return 0;
        }
        if(arr[m]==arr[m+1])
            cout<<"-1"<<endl;
        else
            cout<<arr[m]<<endl;
}
