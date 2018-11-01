#include<bits/stdc++.h>
using namespace std;
unsigned long int p=1;
int func(unsigned long int a,unsigned long int b)
{
  int pro=1,pairs=1,pro2=1;
for(int i=1;i<=a;i++)
pro=pro*i;
if(b==0)
pairs=a/2;
else
pairs=(a-1)/2;
if(pairs==0)
pairs=1;
for(int j=0;j<pairs;j++)
 pro2=pro2*2;
 p=p*pro;
 p=p/pro2;
 p=p/pairs;
}
int main()
{

unsigned long int t,n;
cin>>t;
while(t--)
{

cin>>n;
unsigned long int a[n],i,j,z,k,m,cc;
cc=0;
for(i=0;i<n;i++)
{
cin>>a[i];
}
sort(a,a+n);
p=1;
for(i=n-1;i>0;i--)
{  m=1;
  cc=0;
  if(a[i-1]==a[i])
  {
    if(i%2==0)
    cc=1;
    while(a[i-1]==a[i])
    {
      m++;
      i--;
      if(i==0)
      break;
    }
    func(m,cc);
  }
}
cout<<p<<"\n";
}
return 0;
}
