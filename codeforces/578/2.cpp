#include<bits/stdc++.h>
#define lli long long int
using namespace std;

int main()
{
    lli t;
    cin>>t;
    while(t--)
    {
        lli n,m,k;
        cin>>n>>m>>k;
        lli a[n];
lli i;
        for(lli i=1;i<=n;i++)
        cin>>a[i];
        if(n==1)
        cout<<"YES"<<endl;
        else
        {
            for(i=1;i<n;i++)
            {
                // cout<<m<<endl;
                if(a[i+1]>a[i] && a[i+1]-a[i]<=k)
                {
                    if(a[i]<k)
                    m+=k-(a[i+1]-a[i]);
                }
                else if(a[i+1]>a[i]&&a[i+1]-a[i]>k)
                {
                    if(a[i+1]-a[i]-k <=m)
                    m-=a[i+1]-a[i]-k;
                    else
                    {
                        cout<<"NO"<<endl;
                        break;
                    }    
                }
                // else if(a[i+1]<a[i]&& a[i]-a[i+1]<=k)
                // {
                //         if(a[i+1]-k>0)
                //         m+=a[i]-a[i+1]+k;
                //         else
                //         m+=a[i];
                // }
                else if(a[i]>a[i+1])
                {
                    m+=a[i]-a[i+1];
                    if(k<a[i])
                    m+=k;
                    else
                    m+=a[i];
                }
            }
        if(i==n)
      cout<<"YES"<<endl; 
        }
 
    }
}