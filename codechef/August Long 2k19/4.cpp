#include<bits/stdc++.h>
using namespace std;
long long int max(long long int a,long long int b)
{
    if(a>b)
    return a;
    else
    {
        return b;   
    }
    
}
long long int min(long long int a,long long int b)
{
    if(a<b)
    return a;
    else
    {
        return b;   
    }
}
int main(){
int t;
cin>>t;
while(t--)
{
int n;
cin>>n;
int c[n],h[n];
int d[n]={0};
for(long int i=0;i<n;i++)
cin>>c[i];
for(long int i=0;i<n;i++)
cin>>h[i];
// memset(d,0,n);
// for(long int i=0;i<n;i++)
// cout<<d[i];
// cout<<endl;
for(long int i=0;i<n;i++)
{
    // cout<<max(0,i-d[i])<<endl;
    // cout<<min(n-1,i+d[i])<<endl;
d[max(0,i-c[i])]+=1;
if(i+c[i]+1<=n-1)
d[i+c[i]+1]-=1;
}
for(long int i=1;i<n;i++)
d[i]+=d[i-1];
// for(long long int j=0;j<n;j++)
// {
//     cout<<d[j]<<" ";
// }
// cout<<endl;
sort(d,d+n);
sort(h,h+n);
long long int i;
for(i=0;i<n;i++)
{
    if(h[i]==d[i])
    continue;
    else
    {
        // cout<<h[i]<<" "<<d[n-i-1]<<endl;
        break;
    }
    
}
if(i==n)
cout<<"YES"<<"\n";
else
{
    cout<<"NO"<<"\n";
}

// for(long int i=0;i<n;i++)
// cout<<d[i];
}

}