#include<iostream>
using namespace std;
int main()
{
long int n,k,m;
cin>>n>>k;
while(k--)
{
  if(n%10==0)
n/=10;
else
{
  m=n%10;
  n=n/10;
  m-=1;
  n=n*10+m;
}
}
cout<<n;
return 0;
}
