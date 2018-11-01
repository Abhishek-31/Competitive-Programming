#include<bits/stdc++.h>
using namespace std;
int main() {
    long int t,n;
    cin>>t;
    while(t--) {
        cin>>n;
        long int a[n],b[n],c[n],sum = 0, flag = 1,t;
        for(long int i = 0 ; i < n ; i++) {
            cin>>a[i];
        }
        for(long int i = 0 ; i < n ; i++) {
            cin>>b[i];
            c[i] = b[i] - a[i];
            sum += c[i];
        }
        if((sum % 6) != 0) {
            flag = 0;
        }
        for(long int i=0;i<n-2;i++)
        {
          if(c[i]<0)
      {    flag = 0;
break;}
          if(c[i]!=0)
          {
          t=c[i];
          c[i]-=t;
          c[i+1]-=2*t;
          c[i+2]-=3*t;
          }
}
for(long int i=0;i<n;i++)
{
  if(c[i]!=0||c[i]<0)
  {flag=0;
    break;
}
}



          if(flag == 0) {
              cout<<"NIE\n";
          } else {
              cout<<"TAK\n";
          }
        }
      }
