#include<bits/stdc++.h>
using namespace std;
int main(){
long long int t,n;
cin>>t;
while(t--)
{
    cin>>n;
    long long int a[n],m;
    for(auto i=0;i<n;i++)
    {
cin>>a[i];
    }
    for(auto i=0;i<n;i++)
    {cin>>m;
    a[i]=2*a[i]-m;
    if(a[i]<0)
    a[i]=0;}
    long long int max=a[0];
    for(auto i=1;i<n;i++)
    {
if(a[i]>max)
max=a[i];
    }    
    cout<<max*10<<"\n";
    
}
 
}