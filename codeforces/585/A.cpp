#include<bits/stdc++.h>
using namespace std;
#define lli long long int
int main()
{
    long long int t;
    cin>>t;
    while(t--)
    {
        long long int n;
        cin>>n;
        long long int a[n],b[n];
        for(lli i=0;i<n;i++)
        cin>>a[i];
        lli x=0,y=0;
        for(lli i=n-1;i>=0;i--)
    {
            if(i==n-1)
            {b[i]=0;
            x=a[i];
            y=y+1;}
            else if(a[i]==x)
            {
                b[i]=b[i+1];
                y++;
            }
            else
            {
                x=a[i];
                b[i]=y;
                y++;
            }
            
            
    }
    for(lli i=0;i<n;i++)
    cout<<b[i]<<" ";
    cout<<endl;
    }
}