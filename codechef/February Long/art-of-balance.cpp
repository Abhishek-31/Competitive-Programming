/*Made by Abhishek Agarwal */  
#include<bits/stdc++.h> 
using namespace std;  
#define fastio ios_base::sync_with_stdio(false);   cin.tie(NULL);   cout.tie(NULL); 
#define pb push_back;
#define  lli long long int
int main() 
{ 
fastio; 
long long int t,i;
string s; 
cin>>t; 
long long int a[26],max_length,m,k;
while(t--) 
{
    cin>>s;
for(i=0;i<26;i++)
a[i]=0;
for(i=0;i<s.size();i++)
{
a[int(s[i]-65)]++;
}
// for(i=0;i<26;i++)
// cout<<a[i];
sort(a,a+26,greater<int>());

if(s.size()>26)
max_length=26;
else
max_length=s.size();
long long int p,m=INT_MAX;
for(i=1;i<=max_length;i++)
{
p=0;
if(s.size()%i==0)
{ 
for(k=0;k<i;k++)
{
if((s.size()/i)-a[k]<0)
continue;
else
{
    p+=(s.size()/i-a[k]);
}
}
if(p<m)
m=p;
}
}
cout<<m<<endl;
}
return 0;
}