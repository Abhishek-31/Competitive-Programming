   /*Made by Abhishek Agarwal */
 #include<bits/stdc++.h>
 using namespace std;
 #define fastio ios_base::sync_with_stdio(false);   cin.tie(NULL);   cout.tie(NULL);
 int main()
 {
 fastio;
 int t;
 cin>>t;
 int n,m,i;
 while(t--)
 {
   cin>>n>>m;
int a[n],b[m],c[n],d[m],count=0,k,l,j;
for(i=0;i<n;i++)
cin>>a[i];
for(i=0;i<m;i++)
cin>>b[i];
k=n;
l=m;
sort(a,a+n);
sort(b,b+m);
for(i=0;i<n;i++)
{
  if(a[i]==0)
  {
    continue;
  }
  else
  {
    count=1;
    break;
  }
}
if(count==1)
{k=0;
  for(j=i;j<n;j++)
  {
    c[k]=a[j];
    k++;
  }
}
else
{k=1;
c[0]=0;}
//
for(i=0;i<m;i++)
{
  if(b[i]==0)
  {
    continue;
  }
  else
  {
    count=1;
    break;
  }
}
if(count==1)
{l=0;
  for(j=i;j<m;j++)
  {
    d[l]=b[j];
    l++;
  }
}
else
{l=1;
d[0]=0;}
//
//cout<<k<<l;
if(k!=l)
{
cout<<"Alice\n";
}
else
{

  for(i=0;i<k;i++)
  {
    if(c[i]!=d[i])
    {

      break;
    }
  }
  if(i==k)
  cout<<"Bob\n";
  else if(i!=k)
  cout<<"Alice\n";
}
 }
 return 0;
 }
