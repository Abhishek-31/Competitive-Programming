#include<bits/stdc++.h>
using namespace std;
long int p=1;
void func(long int a,long int b)
{
  long int pro=1,pairs=1,pro2=1;
for(long int i=1;i<=a;i++)
pro=(pro*(i%1000000007))%1000000007;
if(b==0)
pairs=a/2;
else
pairs=(a-1)/2;
if(pairs==0)
pairs=1;
for(long int j=0;j<pairs;j++)
 pro2=pro2*2;
 p=p*pro%1000000007;
 p=p/pro2;
 p=p/pairs;
 p=p%1000000007;
}

int main()
{

long int t,n;
cin>>t;
while(t--)
{

cin>>n;
long int a[n],i,j,z,k,m,cc;
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
  if(a[i]==a[i-1])
  {
    if(i%2==0)
    cc=1;
    while(a[i]==a[i-1])
    {
      m++;
      i--;
      if(i==0)
      break;
    }

    func(m,cc);

  }
}
cout<<p%1000000007<<"\n";
}
return 0;
}
