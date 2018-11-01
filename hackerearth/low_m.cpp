#include<iostream>
using namespace std;
  int prime[100001],drdo[100001];
  int pi;
long int find(long int b)
{
  long int i;
  if(prime[b]==0)
  {
    return b;
  }
  else
    for(i=2;i<=pi-1;i++)
    if(b%i==0)
    {
      return i;
    }

}
void sieve()
{
pi=0;
  for(int i = 0; i*i <= 100000; i++)
{
  prime[i] = 0;
}
for(int i = 2; i*i <= 100000; i++)
{
  if(prime[i] != -1)
  {
    for(int j = 2*i; j*j <=100000 ; j += i)
      prime[j] = -1;
  }
}
for(long int i = 2; i*i <= 100000; i++)
{
if(prime[i]==0)
{
drdo[pi]=i;
pi++;
}
}

}
int main()
{
    long int a,b,t,c,count;
    cin>>t;
    sieve();
    while(t--)
  {

    count=0;
    cin>>a>>b;
    while(b>=a)
    {
      c=find(b);
      b=b/c;
      count++;
    }
   cout<<count<<endl;
  }
  return 0;
}
