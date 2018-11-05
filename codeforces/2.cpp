

#include<bits/stdc++.h>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<algorithm>

using namespace std;

int main(){
   int a=0,b=0,c=0,d,i,j,n,m,ck=0;
   string arr,brr;
   char aa,bb;
   cin>>n;
   cin>>arr;
   for(i=0; i<n; i++){
    aa = arr[i];
    bb = arr[i+1];
      ck=0;
      for(j=0; j<n; j++){
        if(arr[j]==aa && arr[j+1]==bb){
            ck++;
        }
      }
      if(c<ck){
        brr=aa;
        brr+=bb;
        c=ck;
      }
   }
    cout<<brr<<endl;
}
