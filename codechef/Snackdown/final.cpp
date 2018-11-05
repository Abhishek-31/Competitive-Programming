#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--)
{
cin>>n;
int a[n];
for(i=0;i<n;i++)
cin>>a[i];
sort(a,a+n);
for(i=n-1;i>=1;i--)
{
  m=1;
  cc=0;
  if(a[i]==a[i-1]&&(i%2==0))
  cc=1;
while(a[i]==a[i-1])
{
m++;
i--;
if(i==0)
break;
}
}
cout<<p<<endl;
}
return 0;
}
