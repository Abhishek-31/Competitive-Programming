#include<iostream>
using namespace std;
int main()
{
  int z;
  char a[102],m,n,o,p;
  cin>>z;

  cin>>a;
  int i,j,b,c,flag=0,master=0;
  for(i=0;i<z;i++)
  {
m=a[i];
n=a[i+1];
flag=0;
for(j=0;j<z;j++)
{if(a[j]==m&&a[j+1]==n)
flag++;}
if(flag>master)
{
  o=m;
  p=n;
  master=flag;
}
}
cout<<o<<p<<endl;
return 0;

  }
